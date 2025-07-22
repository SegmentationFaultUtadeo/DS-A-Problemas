import sys


quote = True

for line in sys.stdin:
    for char in line:
        if char == '"':
            if quote: print("``", end="")
            else: print("''", end="")
            quote = not quote
        else:
            print(char, end="")
