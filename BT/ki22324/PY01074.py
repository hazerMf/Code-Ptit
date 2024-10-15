from math import sqrt

tong = 0
cnt = 0
for i in range(int(input())):
    n = int(input())
    j=2
    while n>1:
        if n%j==0:
            while n%j==0:
                tong += j
                n = int(n / j)
        if n==1:
            break
        j+=1
print(tong)