import unittest
import math
def gcdofstring(str1, str2):

	if str1 + str2 != str2 + str1:
		return ""

	max_length = math.gcd(len(str1), len(str2))

	return str1[:max_length]

class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(gcdofstring(str1 = "ABCABC", str2 = "ABC"),"ABC")

	def test_case2(self):
		self.assertEqual(gcdofstring( str1 = "ABABAB", str2 = "ABAB"),"AB")

	def test_case3(self):
		self.assertEqual(gcdofstring(str1 = "LEET", str2 = "CODE"),"")





if __name__ == '__main__':
	# gcd(word1 = "abc", word2 = "pqr")
	print(gcdofstring(str1 = "LEET", str2 = "CODE"))
	unittest.main()