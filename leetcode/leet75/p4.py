import unittest
def solution(flowerbed, n):
    planted = 0
    for index in range(len(flowerbed)):
        if flowerbed[index] == 0:
            left_side = False
            right_side = False
            print("in 0 condition")
            if index == 0 or flowerbed[index-1] == 0:
                left_side = True
            if index == len(flowerbed)-1 or flowerbed[index+1] == 0:
                right_side = True
            if left_side and right_side:
                planted = planted+1
                flowerbed[index] = 1
    return planted >=n


if __name__ == "__main__":
    print(solution([1,0,0,0,0,1], 2))

