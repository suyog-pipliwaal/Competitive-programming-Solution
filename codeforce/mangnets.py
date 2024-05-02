if __name__ == "__main__":
    n = int(input())
    s = list()
    count = 0
    for i in range(n):
        poles = input()
        s.append(poles)
    block = s[0]
    for i in range(0,n-1):
        if s[i]!=s[i+1]:
            count+=1
    print(count+1)
        
