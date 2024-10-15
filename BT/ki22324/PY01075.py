from math import lcm
mod = 1000000007
for i in range(int(input())):
    a,b = (input().split())
    a,b = int(a), int(b)
    temp = 1
    for i in range(a,b):
        temp = temp * i
    cnt = 0
    for i in range(1,temp+1):
        if temp%i==0:
            cnt+=1
            cnt = cnt % mod
    print(cnt)