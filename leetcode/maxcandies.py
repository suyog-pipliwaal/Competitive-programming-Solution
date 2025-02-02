import unittest
import math
def max_candies(candies, extraCandies):
	max_candy = max(candies)
	ans = list()
	for i in range(len(candies)):
		if candies[i]+extraCandies >= max_candy:
			ans.append(True)
		else:
			ans.append(False)
	return ans
class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(max_candies(candies = [2,3,5,1,3], extraCandies = 3),[True,True,True,False,True])

	# def test_case2(self):
	# 	self.assertEqual(max_candies( str1 = "ABABAB", str2 = "ABAB"),"AB")

	# def test_case3(self):
	# 	self.assertEqual(max_candies(str1 = "LEET", str2 = "CODE"),"")





if __name__ == '__main__':
	# gcd(word1 = "abc", word2 = "pqr")
	unittest.main()