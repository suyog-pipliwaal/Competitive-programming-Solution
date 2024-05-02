if __name__ == "__main__":
    n = int(input())
    arr = input()
    vol = list(map(float, arr.split(' ')))
    print(sum(vol)/n)
