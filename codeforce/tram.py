if __name__ == "__main__":
    n = int(input())
    current_pass = 0
    max_capcity = 0
    for i in range(n):
        ai, bi = input().strip().split(" ")
        current_pass = current_pass + int(bi) - int(ai)
        if current_pass > max_capcity:
            max_capcity = current_pass
    print(max_capcity)
