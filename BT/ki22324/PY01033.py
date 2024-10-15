from math import gcd
a,b = map(int,input().split())
for i in range(a,b+1):
    for j in range(i+1,b+1):
        for k in range(j+1,b+1):   
            if gcd(i,j)==gcd(j,k)==gcd(k,i)==1:
                print(f"({i}, {j}, {k})")