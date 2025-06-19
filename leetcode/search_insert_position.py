import unittest
import math
from typing import List
def searchInsert(nums: List[int], target: int) -> int:
	left = 0
	right = len(nums)-1
	while left <= right:
		mid = (left+right) // 2
		if nums[mid] == target:
			return mid
		elif nums[mid] > target:
			right = mid - 1
		else:
			left = mid+1
	return left
class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(searchInsert(nums = [1,3,5,6], target = 5),2)

	def test_case2(self):
		self.assertEqual(searchInsert(nums = [1,3,5,6], target = 2),1)

	def test_case3(self):
		self.assertEqual(searchInsert(nums = [1,3,5,6], target = 7),4)


if __name__ == '__main__':
	unittest.main()
	# searchInsert(nums = [1,3,5,6], target = 5)