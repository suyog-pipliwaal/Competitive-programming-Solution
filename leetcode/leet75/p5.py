def solution(s):
    s = list(s)
    
    n = len(s)
    left = 0
    right = n-1

    vowels=set('AEIOUaeiou')

    while left < right:
        while left < right and s[left] not in vowels:
            left = left+1
        while left< right and s[right] not in vowels:
            right = right-1
        s[left], s[right] = s[right], s[left]
        left = left+1
        right = right-1

    return "".join(s)
        


if __name__ == '__main__':
    print(solution("leetcode"))
