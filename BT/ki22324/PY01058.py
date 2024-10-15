import math
def ele(a):
    if a < 2:
        return False
    for i in range(2,int(math.sqrt(a))+1):
        if a%i==0:
            return False
    return True

def chk(s):
    temp = 0
    for i in range(4,0,-1):
        temp = temp*10+int(s[len(s)-i])
    if ele(temp):
        return "YES"
    else :
        return "NO"

for i in range(int(input())):
    print(chk(input()))