def check_digits(year:int) -> bool:
    year = str(year)
    for i in range(len(year)):
        if year[i] in year[i+1:len(year)]:
            return False
    return True

if __name__ == "__main__":
    year = int(input())
    year = year+1
    while True:
        if check_digits(year):
            break
        else:
            year = year+1
    print(year)
