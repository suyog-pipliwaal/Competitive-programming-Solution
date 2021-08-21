def solution(s):
    sorted_s = []
    result = []
    for strings in s:
        sorted_s.append("".join(sorted(strings)))
    print(sorted_s)
    
    flag = []
    for i in range(len(sorted_s)):
        flag.append(0)

    for i in range(len(sorted_s)):
        if sorted_s[i] in sorted_s 
        print(temp)



if __name__=='__main__':
    s = ["eat","tea","tan","ate","nat","bat"]
    solution(s)
