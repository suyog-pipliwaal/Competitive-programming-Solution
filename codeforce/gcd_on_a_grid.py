def find_gcd(x:int, y:int) -> int:
    while(y):
        x,y = y, x%y
    return x
def solution(grid):
    path = list()
    rows = len(grid)
    col  = len(grid[0])
    path.extend(grid[0])
    for row in grid:
        path.append(row[-1])
    
    gcd=find_gcd(path[0],path[1])

    for i in range(2,len(path)):
        gcd = find_gcd(gcd,path[i])
    print(path, gcd)

    path2 = list()
    path2.extend(grid[-1])
    for row in grid:
        path2.append(row[0])

    gcd2 = find_gcd(path2[0], path2[1])
    for i in range(2,len(path2)):
        gcd2=find_gcd(gcd,path2[i])
    print(path2, gcd2)
if __name__ == "__main__":
    testcase = int(input())
    for case in range(1, testcase+1):
        n, m = input().split(" ")
        grid = []
        for i in range(int(n)):
            col = list(map(int, input().strip().split(" ")))[:int(m)]
            grid.append(col)
        solution(grid)
