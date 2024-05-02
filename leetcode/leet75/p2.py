import math
import unittest
def solution(str1: str, str2: str) -> str:
  if str1 + str2 != str2 + str1:
    return ""
  max_length = math.gcd(len(str1), len(str2))
  return str1[:max_length]





class TestSolution(unittest.TestCase):
 def test1(self):
  self.assertEqual(solution("ABCABC", "ABC"), "ABC")
 def test2(self):
  self.assertEqual(solution("ABABAB", "ABAB"), "AB")
 def test3(self):
  self.assertEqual(solution("LEET", "CODE"), "")

if __name__ == '__main__':
 unittest.main()
