n, m, k = list(map(int, input().split()))

key_m = [x for x in range(1, m+1)]

logs = {}

for i in key_m:
    logs[i] = []

while (k):
    k -=1
    puerto, tarjeta = list(map(int, input().split()))
    logs[tarjeta].append(puerto)

for i in range(1, m+1):
    if(not(len(logs[i]) % 2)):
        j = 0
        total_sum = 0
        while (j <= len(logs[i]) - 1):
            if (logs[i][j] != logs[i][j+1]): total_sum += abs(logs[i][j] - logs[i][j+1])
            else: total_sum += 100
            j += 2
        logs[i] = total_sum
    else:
        j = 0
        total_sum = 0
        while(j <= len(logs[i]) - 2):
            if (logs[i][j] != logs[i][j+1]): total_sum += abs(logs[i][j] - logs[i][j+1])
            else: total_sum += 100
            j += 2
        total_sum += 100
        logs[i] = total_sum


for i in range(1, m+1):
    if (i == m): print(logs[i], end = '')
    else: print(logs[i], end=" ")

print()
