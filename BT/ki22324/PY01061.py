import math
def ele(a):
    if(a<2):
        return False
    for i in range(2,int(math.sqrt(a))+1,1):
        if a%i==0:
            return False
    return True

for i in range(int(input())):
    s = input()
    f = l = 0
    for i in range(3):
        f = f*10 + int(s[i])
        l = l*10 + int(s[len(s)-(3-i)])
    if ele(f) and ele(l):
        print("YES")
    else:
        print("NO")