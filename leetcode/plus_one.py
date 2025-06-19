import unittest
import math
from typing import List
def plusOne(digits: List[int]) -> List[int]:
	for i in range(len(digits)-1, -1, -1):
		if digits[i] !=9:
			digits[i] = digits[i]+1
			return digits
		else:
			digits[i] = 0
	return [1]+digits


class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(plusOne(digits = [1,2,3]),[1,2,4])

	def test_case2(self):
		self.assertEqual(plusOne([4,3,2,1]),[4,3,2,2])

	def test_case3(self):
		self.assertEqual(plusOne([9]),[1,0])


if __name__ == '__main__':
	unittest.main()
	# searchInsert(nums = [1,3,5,6], target = 5)