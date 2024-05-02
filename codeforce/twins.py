if __name__ == "__main__":
    n = int(input())
    coins = input()
    coins = list(map(int, coins.split(" ")))
    coins.sort(reverse=True)
    mid_value = sum(coins)/2
    ans = 0
    cnt = 0
    for value in coins:
        ans = ans+value
        cnt =cnt+1
        if ans>mid_value:
            break
    print(cnt)

