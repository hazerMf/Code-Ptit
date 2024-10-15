import math
def ele(num):
    if num < 2:
        return False
    for i in range(2,int(math.sqrt(num))+1):
        if num%i==0:
            return False
    return True

for i in range(int(input())):
    a = int(input())
    cnt = 0
    for k in range(1,a):
        if math.gcd(k,a)==1:
            cnt+=1
    if ele(cnt):
        print("YES")
    else:
        print("NO")