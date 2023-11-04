import math
testcase = int(input())
for i in range(testcase):
	x,y = map(int, input().split())
	print(2*math.gcd(x,y))
	
