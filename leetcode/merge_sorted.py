import unittest
import math
from typing import List
def merge(nums1: List[int], m: int, nums2: List[int], n: int) -> None:
	i = m -1
	j = n -1 
	k = m+n-1
	while i >=0 and j>=0:
		if nums1[k] > nums2[j]:
			nums1[k] = nums1[i]
			i = i-1
		else:
			nums1[k] = nums2[j]
			j = j-1
		k = k-1
	while j>0:
		nums1[k] = nums2[j]
		j = j-1
		k = -1
	print(nums1)


# class TestCode(unittest.TestCase):
# 	def test_case1(self):
# 		self.assertEqual(addBinary(a = "11", b = "1"),"100")

# 	def test_case2(self):
# 		self.assertEqual(addBinary(a = "1010", b = "1011"),"10101")

	# def test_case3(self):
	# 	self.assertEqual(addBinary([9]),[1,0])


if __name__ == '__main__':
	# unittest.main()
	merge(nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3)