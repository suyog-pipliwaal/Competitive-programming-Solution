def solution(s, pos, opening, closed, n):
    result = []
    if(closed==n):
        ans=''
        for i in s:
            ans = ans+i
        result.append(ans)
    else:
        if(opening > closed):
            s[pos] = '}'
            result.extend( solution(s, pos+1, opening, closed+1, n) )
        if (opening < n):
            s[pos] = '{'
            result.extend( solution(s, pos+1, opening+1, closed, n))
    return result

if __name__=='__main__':
    n=3
    s = [""]*2*n
    print(solution(s, 0, 0, 0, n))
