testcase = int(input())
while testcase!=0:
    n,u,d = input().split()
    print(n,u,d)
    height = list(int(num) for num in input().strip().split())[:n]
    flag = 0
    print(height)
    testcase=testcase-1
