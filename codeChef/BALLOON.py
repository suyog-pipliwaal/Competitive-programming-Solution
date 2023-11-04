def solution(rating):
    count = 0
    for i in range(len(rating)):
        if rating[i] <= 7:
            count+=1
        if count==7:
            return i+1

if __name__=='__main__':
    testcase = int(input())
    for _ in range(testcase):
        n = int(input())
        rating = list(int(num) for num in input().strip().split())[:n]
        print(solution(rating))
