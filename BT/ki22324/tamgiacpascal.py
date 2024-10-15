from math import factorial
m,n = map(int,input().split())
print(factorial(n)//factorial(m)//factorial(n-m))