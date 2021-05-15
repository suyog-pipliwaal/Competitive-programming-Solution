if __name__=='__main__':
    for _ in range(int(input())):
        totalTime = int(input())
        distance = 0
        
        speedOfAlice = list(map(int, input().strip().split()))[:totalTime]
        speedOfBob = list(map(int, input().strip().split()))[:totalTime]
        
        distanceOfAlice = 0
        distanceOfBob = 0
        
        for seconds in range(totalTime):
            if speedOfAlice[seconds]==speedOfBob[seconds]:
                if distanceOfAlice == distanceOfBob:
                    distance+=speedOfAlice[seconds]
            else:
                distanceOfAlice+=speedOfAlice[seconds]
                distanceOfBob+=speedOfBob[seconds]


        print(distance)
