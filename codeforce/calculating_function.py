if __name__ == "__main__":
    #n = int(input())
    value = 0
    n = 1000000
    for i in range(1, n+1):
        value = value + ((-1)**i)*i
    print(value)
