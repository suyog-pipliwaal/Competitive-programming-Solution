t = int(input())
for _ in range(t):
    x, y, z     = map(int, input().split())
    time = [x,y,z]
    time.sort()
    if time[0] == x:
        print("ALICE")
    if time[0] == y:
        print("BOB")
    if time[0] == z:
        print("CHARLIE")
