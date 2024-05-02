if __name__ == "__main__":
    n, k = input().split(" ")
    cnt = 0
    for i in range(1 ,int(n)+1, 2):
        cnt+=1
        if cnt == int(k):
            print(i)
    for i in range(2, int(n)+1, 2):
        cnt+=1
        if cnt == int(k):
            print(i)
 
         

