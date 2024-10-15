from math import gcd
s = int(input())
l = sorted([int(i) for i in input().split()])
for i in range(s-1):
    for j in range(i+1,s):
        if gcd(l[i],l[j])==1:
            print(l[i],end=' ')
            print(l[j])