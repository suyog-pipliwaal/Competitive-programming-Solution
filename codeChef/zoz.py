def solution(arr, k):
    count = 0
    total = sum(arr)
    for i in range(len(arr)):
        requiredSum = total - arr[i]
        if (arr[i]+k) > requiredSum:
            count+=1

    return count

if __name__ =='__main__':
    testcase = int(input())
    for i in range(0, testcase):
        n, k = [int (x) for x in input().split()]
        arr = list(map(int,input().strip().split()))[:n]
        print(solution(arr, k))

