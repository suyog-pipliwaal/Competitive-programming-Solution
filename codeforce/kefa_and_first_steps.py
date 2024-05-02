def solution(array:list) -> int:
    current_length  = 0
    max_length = 0
    current_ele = array[0]
    for i in range(1, len(array)):
        if array[i] >= current_ele:
            current_length +=1
        else:
            current_length = 1
        current_ele = array[i]
        max_length = max(max_length, current_length)
    return max_length

if __name__ == "__main__":
    n = int(input())
    money = input()
    money = list(map(float, money.split(' ')))
    print(solution(money))
