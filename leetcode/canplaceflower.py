import unittest
import math
def canPlaceFlowers(flowerbed, n):
	m = len(flowerbed)
	count = 0
	for i in range(0, m):
		if flowerbed[i] == 0:
			if (i == 0 or flowerbed[i-1] == 0 )and (i==m-1 or flowerbed[i+1] == 0):
				flowerbed[i] = 1
				count+=1
	print("count is ", count)
	return count >= n




class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(canPlaceFlowers(flowerbed = [1,0,0,0,0,1], n = 2),False)

	# def test_case2(self):
	# 	self.assertEqual(max_candies( str1 = "ABABAB", str2 = "ABAB"),"AB")

	# def test_case3(self):
	# 	self.assertEqual(max_candies(str1 = "LEET", str2 = "CODE"),"")





if __name__ == '__main__':
	# gcd(word1 = "abc", word2 = "pqr")
	unittest.main()