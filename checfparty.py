testcase = int(input())
for i in range(testcase):
    n = int(input())
    arr = list(map(int, input().strip().split()))[:n]
    arr.sort()
    count = 0
    for i in range(len(arr)):
        if arr[i] <= i:
            count+=1
        else:
            break
    print(count)
