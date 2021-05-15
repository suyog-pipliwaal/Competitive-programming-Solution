if __name__=='__main__':
    testcase = int(input())
    for _ in range(testcase):
        
        length, count = [int (x) for x in input().split()]
        height = list(map(int, input().strip().split()))[:length]
        
        maxHeight = max(height)
        flag = False
        
        for i in range(len(height)):
            diff = maxHeight - height[i]
            print('diff = ', diff)
            count = count - diff
            print('count = ', count)
            height[i] = height[i]+diff
            if count == 0:
                flag = True
                break
        if flag:
            print("YES")
        else: 
            print("NO")
