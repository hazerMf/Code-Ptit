import math

n, k = [int(i) for i in input().split()]
l, u = 10**(k - 1), 10**k
count = 0
for i in range(l, u):
    if math.gcd(n, i) == 1:
        print(i, end=' ')
        count += 1
        if count % 10 == 0:
            print()