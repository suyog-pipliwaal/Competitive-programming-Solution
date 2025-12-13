import unittest
import re
class TestSolution(unittest.TestCase):
     def setUp(self):
          self.s = Solution()
     def test_valid_palindrome(self):
         test_case = [
              ("A man, a plan, a canal: Panama", True),
              ("race a car", False),
              ("", True)
         ]
         for s, result in test_case:
              with self.subTest(input=s):
                   self.assertEqual(self.s.isPalindrome(s), result)

     
class Solution:
    def isPalindrome(self, s:str) -> bool:
        if s == "":
             return True
        pattern = re.compile('[\W_]+')
        clean_s =  pattern.sub("",s).lower()
        if clean_s == clean_s[::-1]:
            return True
        return False

if __name__ == "__main__":
     unittest.main()
