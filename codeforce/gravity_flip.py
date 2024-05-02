if __name__ == "__main__":
    n = int(input())
    arr = input()
    height = list(map(int, arr.split(" ")))
    max_height = max(height)
    height.sort(reverse=False)
    for i in height:
        print(i, end=" ")
    print()
