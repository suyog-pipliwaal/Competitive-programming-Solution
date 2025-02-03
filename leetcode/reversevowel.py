import unittest
import math
def reverseVowels(s):
	 i = 0
	 j = len(s)-1
	 vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
	 s = list(s)
	 while  i<j:
	 	if s[i] in vowels and s[j] in vowels:
	 		s[i], s[j] = s[j], s[i]
	 		i = i+1
	 		j = j-1
	 	elif s[i] not in vowels:
	 		i = i+1
	 	elif s[j] not in vowels:
	 		j = j-1
	 return "".join(s)


class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(reverseVowels( s = "IceCreAm"),"AceCreIm")

	def test_case2(self):
		self.assertEqual(reverseVowels(s = "leetcode"),"leotcede")

	# def test_case3(self):
	# 	self.assertEqual(max_candies(str1 = "LEET", str2 = "CODE"),"")





if __name__ == '__main__':
	# gcd(word1 = "abc", word2 = "pqr")
	unittest.main()