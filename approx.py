if __name__=='__main__':
    for _ in range(int(input())):
        fp = int(input())
        if fp==0:
            print(3)
        else:
            denominator = 33102
            numerator = 103993
            result = '3.'
            for i in range(fp):
                numerator = numerator%denominator
                numerator = numerator*10
                result+=str(numerator//denominator)
            print(result)
        #fp = '.'+fp+'f'
        #print(format(103993/33102, fp))
