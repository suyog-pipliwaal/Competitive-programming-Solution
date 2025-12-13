import unittest
import re
class TestSolution(unittest.TestCase):
     def setUp(self):
          self.s = Solution()
     def test_valid_palindrome(self):
          test_case = [
              ([2,2,3,2], 3),
              ([0,1,0,1,0,1,99], 99),
          ]
          for s, result in test_case:
              with self.subTest(input=s):
                   self.assertEqual(self.s.singleNumber(s), result)

     
class Solution:
     # Every number appears twice, except one number which appears once.
     # def singleNumber(self, nums:list[int]) -> int:
     #      if len(nums) == 1:
     #           return nums[0]
     #      result = 0
     #      for i in nums:
     #           result = result^i
     #      return result


     # where every element appears three times except for one, which appears exactly once?
     def singleNumber(self, nums:list[int]) -> int:
          freq = dict()
          for i in nums:
               if i in freq.keys():
                    freq[i] = freq[i]+1
               else: freq[i] = 1
          for keys, values in freq.items():
               if values == 1:
                    return keys

if __name__ == "__main__":
     unittest.main()
     # s = Solution()
     # print(s.singleNumber(nums=[2,2,1,3,1]))
     