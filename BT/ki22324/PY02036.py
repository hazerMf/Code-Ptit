from math import gcd
a = int(input())
l = sorted(list([int(i) for i in input().split()]))
for i in range(0,a-1):
    for j in range(i+1,a):
        if gcd(l[i],l[j])==1:
            print(str(l[i])+" "+str(l[j]))