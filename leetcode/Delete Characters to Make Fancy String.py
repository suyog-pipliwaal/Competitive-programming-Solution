class Solution:
	def makeFancyString(self, s:str) -> str:
		n = len(s)
		prev = s[0]
		freq = 1
		ans = s[0]
		for i in range(1,n):
			if s[i] == prev:
				freq+=1
			else:
				prev = s[i]
				freq = 1
			if freq <3:
				ans = ans+s[i]
		print(ans)
		return ans
if __name__ == '__main__':
	s = Solution()
	s.makeFancyString( s = "leeetcode")
	s.makeFancyString(s="aaabaaaa")