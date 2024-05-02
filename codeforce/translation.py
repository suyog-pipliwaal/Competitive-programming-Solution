def reversed_string(a_string):
    return a_string[::-1]

if __name__ == "__main__":
    string1 = input()
    string2 = input()

    if reversed_string(string1) == string2:
        print("YES")
    else:
        print("NO")
