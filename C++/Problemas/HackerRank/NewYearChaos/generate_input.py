#!/usr/bin/env python3

import random

n = int(10e5)
q = list(range(1, n+1))

for i in range(n):
    bribes = random.randint(0, 2)
    for _ in range(bribes):
        if i > 0 :
            q[i], q[i-1] = q[i-1], q[i]
            i -= 1

print(1)
print(n)
print(' '.join(map(str, q)))
