import string
if __name__ == "__main__":
    n = int(input())
    string = input()
    if set(string.lower()) >= set('abcdefghijklmnopqrstuvxywz'):
        print("YES")
    else:
        print("NO")

