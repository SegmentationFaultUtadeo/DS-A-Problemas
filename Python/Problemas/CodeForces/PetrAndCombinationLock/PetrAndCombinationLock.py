

def isPossible(indx, nums, curr, ans):
    if (indx == len(nums)):
        ans.append(sum(curr) % 360)
        return


def main():
    n = int(input())
    nums = [0] * n
    for i in range(n):
        temp = int(input())
        nums[i] = temp

    ans = []
    curr = []

    ans = isPossible(0, nums, curr, ans)


main()    
