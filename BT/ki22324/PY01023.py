from math import *

for tc in range(int(input())):
    n = int(input())
    tmp = "1"
    for i in range(2,isqrt(n)+1):
        cnt = 0
        while n % i == 0:
            cnt += 1
            n //= i
        if(cnt != 0):
            tmp += " * " + str(i) + '^' + str(cnt)
        if(n == 1): break
    if(n != 1):
        tmp += " * " + str(n) + '^1'
    print(tmp)