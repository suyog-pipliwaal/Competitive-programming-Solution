testcase = int(input())
for i in range(testcase):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    if (sum(arr)%2==0):
        print("1")
    else:
        print("2")
