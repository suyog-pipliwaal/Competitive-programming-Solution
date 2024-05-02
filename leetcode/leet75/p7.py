def solution (nums: list) -> list:
	answer = [0] * len(nums)
	n = len(nums)
	for i in range(n):
		product = 1
		for j in range(n):
			if i!=j:
				product = product*nums[j]
		answer[i] = product
	return answer  




if __name__ == "__main__":
	print(solution([1,2,3,4]))
	print(solution([-1,1,0,-3,3]))
