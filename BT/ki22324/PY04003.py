import math
a,b = [int(i) for i in input().split()]
n = math.gcd(a,b)
print(str(int(a/n))+"/"+str(int(b/n)))