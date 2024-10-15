import math
def ele(a):
    if a < 2:
        return False
    for i in range(2,int(math.sqrt(a))+1):
        if a%i==0:
            return False
    return True

def chk(s):
    for i in range(len(s)):
        if ele(i):
            if not ele(int(s[i])):
                return "NO"
        else:
            if ele(int(s[i])):
                return "NO"
    return "YES"


for i in range(int(input())):
    print(chk(input()))