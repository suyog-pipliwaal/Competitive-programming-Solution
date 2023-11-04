
def solution(nums):
    count = 0
    for i in range(0,len(nums)-1):
        if (nums[i]!=nums[i+1]):
            count+=2
            if nums[i]!=nums[i-1] and i > 0:
                count-=1
    return count

if __name__=='__main__':
    testcase = int(input())
    for i in range(testcase):
        n = int(input())
        nums = list(int(num) for num in input().strip().split())[:n]
        print(solution(nums))
