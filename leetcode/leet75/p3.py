import math
import unittest
def solution(candies: list[int], extraCandies: int) -> list[bool]:
    result = ["false"]*len(candies)
    for i in range(len(candies)):
        candies[i] = candies[i]+ extraCandies
        if max(candies) == candies[i]:
            result[i] = "true"
        candies[i] = candies[i]-extraCandies
    return result



class TestSolution(unittest.TestCase):
    def test1(self):
        self.assertEqual(solution([2,3,5,1,3], 3), ["true","true","true","false","true"])
    def test2(self):
        self.assertEqual(solution(candies = [4,2,1,1,2], extraCandies = 1), ["true","false","false","false", "false"])
    def test3(self):
        self.assertEqual(solution(candies = [12,1,12], extraCandies = 10),  ["true","false","true"])

if __name__ == '__main__':
    # print(solution(candies = [2,3,5,1,3], extraCandies = 3))
    # print(solution(candies = [4,2,1,1,2], extraCandies = 1))
    # print(solution(candies = [12,1,12], extraCandies = 10))
    unittest.main()
