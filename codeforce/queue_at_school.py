if __name__ == "__main__":
    n, t = input().strip().split(" ")
    que = input()
    for i in range(int(t)):
        que = [char for char in que]
        for j in range(1, len(que)):
            if que[j] == 'G' and que[j-1] == 'B':
                que[j] = 'B'
                que[j-1] = 'G'
                j = j+1
    print("".join(que))
