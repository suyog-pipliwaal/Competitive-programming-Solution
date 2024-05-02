if __name__ == "__main__":
    n, h = input().strip().split(" ")
    n = int(n)
    h = int(h)
    width = 0
    a = list(map(int, input().strip().split()))[:n]
    for i in range(n):
        if h >= a[i]:
            width = width + 1
        elif h < a[i]:
            width = width + 2
    print(width)
