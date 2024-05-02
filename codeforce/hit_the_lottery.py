if __name__ == "__main__":
    n = int(input())
    cnt = 0
    value = [100,20,10,5,1]
    for num in value:
        cnt = cnt+n//num
        n = n%num
    print(cnt)
  

