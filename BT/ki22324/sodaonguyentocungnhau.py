from math import gcd
for i in range(int(input())):
    n = input()
    if(gcd(int(n),int(n[::-1]))==1):
        print("YES")
    else:
        print("NO")