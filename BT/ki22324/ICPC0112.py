from math import sqrt
def chk(a):
    for i in range(2,int(sqrt(a)+1)):
        if a%i==0:
            return False
    return a>1

for i in range(int(input())):
    n=int(input())
    cnt = 0
    for i in range(5,n-6):
        if(chk(i)):
            if chk(i+6):
                if chk(i+2) or chk(i+4):
                    cnt+=1
    print(cnt)