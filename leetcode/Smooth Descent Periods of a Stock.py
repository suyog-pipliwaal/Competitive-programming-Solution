import unittest
class TestSolution(unittest.TestCase):
    def setUp(self):
        self.s = Solution()
    def test_case1(self):
        prices = [3,2,1,4]
        ans =  7
        expected_ans = self.s.getDescentPeriods(prices)
        self.assertEqual(expected_ans,ans)
    def test_case2(self):
        prices = [8,6,7,7]
        ans =  4
        expected_ans = self.s.getDescentPeriods(prices)
        self.assertEqual(expected_ans,ans)
class Solution:
    def getDescentPeriods(self, prices: list[int]) -> int:
        n = len(prices)
        res = 1
        prev = 1
        for i in range(1, n):
            if prices[i] == prices[i-1]-1:
                prev+=1
            else:
                prev =1 
            res+= prev
        return res
    def all_descent_periods(self, prices:list[int]) -> list:
        start = 0
        result = []
        for i in range(len(prices)):
            if i > 0 and prices[i]!=prices[i-1]-1:
                start = i
            for j in range(start, i+1):
                result.append(prices[j:i+1])
        return result

if __name__ == '__main__':
    # unittest.main()
    s = Solution()
    print(s.all_descent_periods( prices = [8,6,7,7]))