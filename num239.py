testcase = int(input())
for i in range(testcase):
    l, r = input().split(' ')
    count = 0
    for j in range(int(l), int(r)+1):
        num = str(j)
        if (num[-1] == '2') or (num[-1]=='3') or (num[-1]=='9'):
            count+=1
    print(count)
