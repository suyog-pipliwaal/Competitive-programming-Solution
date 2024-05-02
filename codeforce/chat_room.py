if __name__ == "__main__":
    string = input()
    l1 = ""
    for i in range(len(string)):
        if l1 == "" and string[i] == 'h': 
            l1 = l1+string[i]
        elif l1 == "h" and string[i] == 'e': 
            l1 = l1+string[i]
        elif l1 == "he" and string[i] == 'l':
            l1 = l1+string[i]
        elif l1 == "hel" and string[i] == 'l':
            l1 = l1+string[i]
        elif l1 == "hell" and string[i] == 'o':
            l1 = l1+string[i]
    if l1 == "hello":
        print("YES")
    else:
        print("NO")
