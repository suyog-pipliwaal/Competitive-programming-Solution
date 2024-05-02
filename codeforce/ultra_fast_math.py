if __name__ == "__main__":
    num1 = input()
    num2 = input()
    n = len(num1)
    ans = ""
    for i in range(n):
        if num1[i]!=num2[i]:
            ans = ans+"1"
        else:
            ans = ans+"0"
    print(ans)
