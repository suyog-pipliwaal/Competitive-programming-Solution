import unittest
def solution(word1: str, word2: str) -> str:
    result = ""
    longest_length = max(len(word1), len(word2))
    for index in range(longest_length):
        if index <  len(word1):
            result = result+ word1[index]
        if index < len(word2):
            result = result + word2[index]
    return result


class TestSolution(unittest.TestCase):
    def test1(self):
        self.assertEqual(solution("abc", "pqr"), "apbqcr")
    def test2(self):
        self.assertEqual(solution("ab", "pqrs"), "apbqrs")
    def test3(self):
        self.assertEqual(solution("abcd", "pq"), "apbqcd")

if __name__ == '__main__':
    unittest.main()
