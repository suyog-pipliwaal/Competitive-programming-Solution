def solution(s):
    charSet = set()
    for chars in s:
        charSet.add(chars)

    return len(charSet)

if __name__=='__main__':
    testcase = int(input())
    for i in range(testcase):
        s = input()
        print(solution(s))
