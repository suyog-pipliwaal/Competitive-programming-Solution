if __name__=='__main__':
    testcase  = int(input())
    for i in range(testcase):
        n = int(input())
        s = ''
        count = []
        for j in range(n):
            s+=input()
        count.append(s.count('c')//2)
        count.append(s.count('o'))
        count.append(s.count('d'))
        count.append(s.count('e')//2)
        count.append(s.count('f'))
        count.append(s.count('h'))
        print(min(count))

