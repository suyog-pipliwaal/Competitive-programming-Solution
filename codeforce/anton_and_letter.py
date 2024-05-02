if __name__ == "__main__":
    alph = input()
    if alph == "{}":
        print(0)
    else:
        alph = alph.replace('{', '')
        alph = alph.replace('}', '')
        alph = alph.replace(' ', '')
        print(len(set(alph.split(','))))
