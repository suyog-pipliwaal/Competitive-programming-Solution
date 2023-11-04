def maxSubarray(nums):
    n = len(nums)
    if n == 1:
        return nums[0]
    m = n//2
    left = maxSubarray(arr)
    right = maxSubarray(arr

maxSubarray([-2,1,-3,4,-1,2,1,-5,4])
