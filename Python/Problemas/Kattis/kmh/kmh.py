import math

N = int(input())

maxi_speed = 10
for _ in range(N):
    L = input()
    if (L.isnumeric()):
        print(L)
        maxi_speed = max(int(L), maxi_speed)
    else:
        print(10*(math.floor(maxi_speed/10)+1))
