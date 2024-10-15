import math
def prime(a):
    for i in range(2,int(math.sqrt(a))+1):
        if a%i==0:
            return False
    return a>1

a = int(input())
bm = [0] * 999999
l = [int(i) for i in input().split()]
for i in range(a):
    if prime(l[i]):
        if bm[l[i]]==0:
            cnt = 1
            for j in range(i+1,a):
                if l[j]==l[i]:
                    cnt+=1
            print(str(l[i])+" "+str(cnt))
            bm[l[i]]+=1