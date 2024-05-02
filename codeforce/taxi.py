import math
if __name__ == "__main__":
    n = int(input())
    groups = input()
    groups = list(map(int, groups.split(" ")))
    print(math.ceil(sum(groups)/4))

