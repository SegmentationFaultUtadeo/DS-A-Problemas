c = int(input())


def binpowmod(x, y, n):
    x %= n
    res = 1
    while (y > 0):
        if (y & 1):
            res = res * x % n
        x = x * x % n
        y >>= 1
    return res

while (c != 0):
    c -= 1
    x, y, n = map(int, input().split())
    print(binpowmod(x, y, n))
