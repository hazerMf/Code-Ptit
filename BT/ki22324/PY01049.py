import math
def ele(a):
    if a < 2:
        return False
    for i in range(2,int(math.sqrt(a))):
        if a %i==0:
            return False
    return True

def chk(a):
    if not ele(len(a)):
        return "NO"
    cnt = a.count('2') + a.count('3') + a.count('5') + a.count('7')
    if cnt <= len(a) - cnt :
        return "NO"
    return "YES"

for i in range(int(input())):
    s = input()
    print(chk(s))