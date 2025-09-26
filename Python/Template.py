def isOn(S, j):
    return (S & ( 1 << j ))

def setBits(S, j):
    return (S | (1 << j))

def clearBits(S, j):
    return (S & ~(1 << j))

def toggleBits(S, j):
    return (S ^ (1 << j))

def lowBits(S):
    return (S & (-S))

def setAll(n):
    return ((1<<n) - 1)
