def product(nums):
    res = max(nums)
    currentMin, currentMax = 1,1
    for n in nums:
        if n == 0:
            currentMin, currentMax = 1,1
            continue
        currentMin = min(n*currentMax, n*currentMin, n)
        currentMax = max(n*currentMax, n*currentMin, n)
        res = max(res, currentMax)
    return res
print(product([-1, -2, -3]))
