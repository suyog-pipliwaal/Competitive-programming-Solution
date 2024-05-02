def get_feeling(n):
    if n == 1:
        return "I hate it "
    elif n == 2:
        return "I love it "
    elif n%2 == 0:
        return "I love that "
    else:
        return "I hate that "


if __name__ == "__main__":
    n = int(input())
    ans = ""
    for i in range(n, 0, -1):
        ans = ans+get_feeling(i)
    print(ans)


