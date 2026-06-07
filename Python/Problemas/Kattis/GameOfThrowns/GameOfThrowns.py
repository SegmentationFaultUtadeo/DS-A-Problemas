from collections import deque

n, k = map(int, input().split())

instru = input().split()
nums = deque([])
i = 0

while i < len(instru):
    if instru[i] == "undo":
        i += 1
        for j in range(int(instru[i])):
            nums.pop()
    else:
        nums.append(int(instru[i]))
    i += 1

print(sum(nums) % n)

            
