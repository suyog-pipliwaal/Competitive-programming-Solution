if __name__ == '__main__':
  testcase = int(raw_input())
  for i in range(1,testcase+1,1):
     string  = raw_input()
     if "010" in string or "101" in string:
        print ("Good")
     else:
        print ("Bad")
