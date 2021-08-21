if __name__=='__main__':
    testcase = int(input())
    for i in range(testcase):
        s = input()
        total = 0
        for char in s:
            if char.isdigit():
                total+=int(char)

        print(total)
