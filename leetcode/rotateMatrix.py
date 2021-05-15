def solution(matrix):
    for row in matrix:
        for col in row:
            print(col)
    #print (list(zip(*matrix[::-1])))
    #N = len(matrix)
    #column_list = [ [matrix[row][column] for row in range(N)] for column in range(N) ]
    #print(column_list)
    #for col in range(len(matrix)):
     #   for row in range(len(matrix)):
      #      print(matrix[row][col])



if __name__=='__main__':
    matrix = [[1,2,3],[4,5,6]]
    solution(matrix)
