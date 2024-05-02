if __name__ == "__main__":
    n = int(input())
    room = 0
    for i in range(n):
        p,q = input().strip().split(" ")
        if int(q) - int(p) >=2:
            room = room+1
    print(room)
