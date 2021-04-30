def solution(num1, num2):
    m1 = len(num1)
    m2 = len(num2)
    m3 = int(m1+m2)
    # if m3%2==0 then (m3/2+m3/2+1)/2 element
    # if m3%2==1 then (m3+1)/2 elemet
    num = num1+num2
    # sort num to get result
    Sorted_num = []
    for i in range (len(num)):
        minimun = min(num)
        Sorted_num.append(float(minimun))
        num.remove(minimun)
    if m3%2==0:
        return (Sorted_num[int(m3/2)]+Sorted_num[int(m3/2-1)])/2
    return (Sorted_num[m3//2])
if __name__=="__main__":
    num1 = [1, 2]
    num2 = [3 ,4]
    print (round(solution(num1, num2), 5))
