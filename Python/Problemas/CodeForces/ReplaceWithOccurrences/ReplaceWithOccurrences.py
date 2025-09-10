from collections import Counter

t = 1

while (t != 0):
    n = 5
    b = [1, 2, 2, 2, 2]
    mapa = Counter(b)
    for i in mapa.keys(): mapa[i] = mapa[i]//i
    mapa2 = {i : [] for i in b}
    val = 1
    for i in mapa.keys():
        for j in range(1, mapa.get(i)):
            mapa2[j].append((val, i))
            val += 1


    t -= 1
