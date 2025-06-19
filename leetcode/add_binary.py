import unittest
import math
from typing import List
def addBinary(a: str, b: str) -> str:
	i = len(a) -1
	j = len(b) -1 
	carry = 0
	result  = list()
	while i>=0 or j >=0 or carry:
		digit_a = int(a[i]) if i >= 0 else 0
		digit_b = int(b[j]) if j >= 0 else 0
		total = digit_a+digit_b+carry
		# print(i,j, total)
		result.append(str(total%2))
		carry = total//2
		i -= 1
		j -= 1
		# print(result)
	return "".join(reversed(result))


class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(addBinary(a = "11", b = "1"),"100")

	def test_case2(self):
		self.assertEqual(addBinary(a = "1010", b = "1011"),"10101")

	# def test_case3(self):
	# 	self.assertEqual(addBinary([9]),[1,0])


if __name__ == '__main__':
	unittest.main()
	# searchInsert(nums = [1,3,5,6], target = 5)