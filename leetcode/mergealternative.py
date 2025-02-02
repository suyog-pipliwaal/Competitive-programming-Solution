import unittest
def mergealternative(word1, word2):
	i = 0
	j = 0
	m = len(word1)
	n = len(word2)
	ans = ""
	while i<m or j<n:
		if i < m:
			ans = ans+word1[i]
			i+=1
		if j < n:
			ans = ans+word2[j]
			j+=1
	return "".join(ans)
class TestCode(unittest.TestCase):
	def test_case1(self):
		self.assertEqual(mergealternative(word1 = "abc", word2 = "pqr"),"apbqcr")
	def test_case2(self):
		self.assertEqual(mergealternative(word1 = "ab", word2 = "pqrs"),"apbqrs")
	def test_case3(self):
		self.assertEqual(mergealternative(word1 = "abcd", word2 = "pq"),"apbqcd")
if __name__ == '__main__':
	# mergealternative(word1 = "abc", word2 = "pqr")
	unittest.main()