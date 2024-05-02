import re
def reverseWords(s):
    s = s.split(' ')
    s.reverse()
    _RE_COMBINE_WHITESPACE = re.compile(r"\s+")
    my_str = " ".join(s)
    s =  _RE_COMBINE_WHITESPACE.sub(" ", my_str).strip()
    return s

if __name__== '__main__':
    s ="  hello world  "
    print(reverseWords(s))
