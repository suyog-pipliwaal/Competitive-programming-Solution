import re
import unittest
class TestSolution(unittest.TestCase):
	def setUp(self):
		self.s = Solution()
	def test_case1(self):
		code = ["SAVE20","","PHARMA5","SAVE@20"], 
		businessLine = ["restaurant","grocery","pharmacy","restaurant"], 
		isActive = [True,True,True,True]
		ans =  ["PHARMA5","SAVE20"]
		expected_ans = self.s.validateCoupons(code, businessLine, isActive)
		self.assertEqual(expected_ans,ans)
	# def test_case2(self):
	# 	code = ["GROCERY15","ELECTRONICS_50","DISCOUNT10"]
	# 	businessLine = ["grocery","electronics","invalid"]
	# 	isActive = [False,True,True]
	# 	ans =  ["ELECTRONICS_50"]
	# 	print(self.s.validateCoupons(code, businessLine,isActive))
	# 	self.assertEqual(self.s.validateCoupons(code, businessLine, isActive), ans)
class Solution:
	def validateCoupons(self, code:list[str], businessLine:list[str], isActive:list[bool]) -> list[str]:
		valid_business = ["electronics", "grocery", "pharmacy", "restaurant"]
		valid_coupons = r"^\w+$"
		n = len(code)
		e_code = []
		g_code = []
		p_code = []
		r_code = []
		for i in range(0,n):
			if 	re.fullmatch(valid_coupons, code[i]) and isActive[i] and businessLine[i] == valid_business[0]:
				e_code.append(code[i])
			
			if 	re.fullmatch(valid_coupons, code[i]) and isActive[i] and businessLine[i] == valid_business[1]:
				g_code.append(code[i])	
			
			if 	re.fullmatch(valid_coupons, code[i]) and isActive[i] and businessLine[i] == valid_business[2]:
				p_code.append(code[i])	
			
			if 	re.fullmatch(valid_coupons, code[i]) and isActive[i] and businessLine[i] == valid_business[3]:
				r_code.append(code[i])
		return sorted(e_code+g_code+p_code+r_code)
if __name__ == '__main__':
	unittest.main()
	# s = Solution()
	# ans = s.validateCoupons( code = ["GROCERY15","ELECTRONICS_50","DISCOUNT10"], businessLine = ["grocery","electronics","invalid"], isActive = [False,True,True])
	# print(ans)