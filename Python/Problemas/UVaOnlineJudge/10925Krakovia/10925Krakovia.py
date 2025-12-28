# Problema de UVa 10925
# Autor: Ludwig Alvarado


N, F = map(int, input().split())
bill = 1
while N != 0 and F != 0:
    v = 0

    for _ in range(1, N+1): v += int(input())

    print(f"Bill #{bill} costs {v}: each friend should pay {v//F}\n")
    bill += 1

    N, F = map(int, input().split())
