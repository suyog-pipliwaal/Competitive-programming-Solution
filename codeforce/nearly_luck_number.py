def solution(number:int) -> str:
    count = 0
    count = 0
    for num in str(number):
        if int(num) == 4 or int(num) == 7:
            count +=1
    if count == 7 or count == 4:
        return "YES"
    return "NO"

if __name__ == "__main__":
    number = int(input())
    print(solution(number))
