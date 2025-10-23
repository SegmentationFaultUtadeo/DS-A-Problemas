
# PRINT ARRAY WITHOUT [,,,]
#print(*arr)


#La función intenta determinar si en el arreglo a (de tamaño n) existen dos números cuya suma sea igual a k.
def isPairSum(a, n, k):
	global x, y
	i, j = 0, n - 1
	while i < j:
		if a[i] + a[j] == k:
			x, y = i, j
			return 1
		elif a[i] + a[j] > k:
			j = j - 1
		else:
			i = i + 1
	return 0


# Halla la suma mínima de un subarreglo de k elementos en un array,
#  y devuelve los índices donde empieza y termina dicho subarreglo.
for _ in range(int(input())):
	n, k = map(int, input().split())
	arr = list(map(int, input().split()))
	cursum = res_ind = 0
	# cursum = sum(x for x in arr[:k])
	for i in range(k):
		cursum += arr[i]
	minsum = cursum
	for i in range(k, n):
		cursum = cursum + arr[i] - arr[i - k] #Deslizar ventana
		if cursum < minsum:
			minsum = cursum
			res_ind = i - k + 1
	print(res_ind, res_ind + k - 1)

'''
#----INPUT----

1
7 3
3 7 90 20 10 50 40

#----OUTPUT----

3 5
'''




'''
COLLECTIONS PYTHON
'''

from collections import deque

dq = deque([1, 2, 3])
dq.append(4)       # [1, 2, 3, 4]
dq.appendleft(0)   # [0, 1, 2, 3, 4]
dq.popleft()       # -> 0



import heapq

h = []
heapq.heappush(h, 3)
heapq.heappush(h, 1)
heapq.heappush(h, 5)

print(heapq.heappop(h))  # 1 (menor elemento)

# Max heap:
h = []
heapq.heappush(h, -3)
heapq.heappush(h, -1)
heapq.heappush(h, -5)
print(-heapq.heappop(h)) # 5 (mayor)




from collections import defaultdict
#Representar grafos con listas de adyacencia.
g = defaultdict(list)
n, m = 5, 6 #Nodos, aristas
edges = [(1,2), (1,3), (2,4), (3,4), (4,5), (5,1)]

for u, v in edges:
    g[u].append(v)
    g[v].append(u)  # si es no dirigido


from collections import Counter
#Cuenta frecuencias mas rapido
cnt = Counter([1,2,2,3,3,3])
print(cnt[2])       # 2
print(cnt.most_common(1))  # [(3, 3)]



import bisect
#Inserción en lista ordenada
arr = [1, 3, 3, 5, 8]

print(bisect.bisect_left(arr, 3))   # → 1
print(bisect.bisect_right(arr, 3))  # → 3

#Cuantos elemento hay entre L y R
arr = [1, 2, 4, 4, 5, 7, 9]
L, R = 4, 7
left = bisect.bisect_left(arr, L)
right = bisect.bisect_right(arr, R)
print(right - left)  # 4 elementos en el rango [4,7]



'''Djistra'''
from heapq import heappush, heappop
import math

def dijkstra(graph, start):
    dist = {u: math.inf for u in graph}
    dist[start] = 0
    pq = [(0, start)]
    while pq:
        d, u = heappop(pq)
        if d > dist[u]: continue
        for v, w in graph[u]:
            if dist[v] > d + w:
                dist[v] = d + w
                heappush(pq, (dist[v], v))
    return dist
graph = {
    1: [(2, 4), (3, 1)],
    2: [(3, 2), (4, 5)],
    3: [(4, 8)],
    4: []
}
#Distancias minimas desde start a cada nodo
distancias = dijkstra(graph, 1)
print(distancias) #{1: 0, 2: 3, 3: 1, 4: 8}
