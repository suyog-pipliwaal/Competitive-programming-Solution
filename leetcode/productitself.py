import unittest
import math
def productExceptSelf(nums):
	n 					= len(nums)
	prev_product 		= [0]*n
	suffix_product 		= [0]*n
	ans 				= [0]*n
	prev_product[0] 	= 1
	suffix_product[n-1] = 1


	for i in range(1,n):
		prev_product[i] = prev_product[i-1]*nums[i-1]
	

	for i in range(n-2, -1, -1):
		suffix_product[i] = suffix_product[i+1]*nums[i+1]

	
	for i in range(n):
		ans[i] = prev_product[i]*suffix_product[i]

	return ans



class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(productExceptSelf(nums = [1,2,3,4]),[24,12,8,6])

	def test_case2(self):
		self.assertEqual(productExceptSelf(nums = [-1,1,0,-3,3]),[0,0,9,0,0])

	# def test_case3(self):
	# 	self.assertEqual(max_candies(str1 = "LEET", str2 = "CODE"),"")





if __name__ == '__main__':
	# gcd(word1 = "abc", word2 = "pqr")
	unittest.main()