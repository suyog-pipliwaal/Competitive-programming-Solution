def solution(word:str) -> str:
    lower_count = 0
    upper_count = 0
    for char in word:
        if char.isupper():
            upper_count = upper_count  + 1
        else: lower_count = lower_count + 1
    if lower_count > upper_count:
        return word.lower()
    if lower_count < upper_count:
        return word.upper()
    return word.lower()

if __name__ == "__main__":
    word = input()
    print(solution(word))
    
