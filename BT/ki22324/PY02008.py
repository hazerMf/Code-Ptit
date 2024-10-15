import math
def pr(a):
    for i in range(2,int(math.sqrt(a)+1)):
        if a%i==0:
            return False
    return a > 1

a,b=input().split()
print(b,end=' ')
cnt=0
curr=2
while cnt<int(a):
    if pr(curr):
        print(int(b)+curr,end=' ')
        b = int(b)+curr
        curr+=1
        cnt+=1
    else:
        curr+=1