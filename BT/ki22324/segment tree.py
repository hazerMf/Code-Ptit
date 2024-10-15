
n = int(input())
p=1
while p<n: p<<=1

t = [0]*(4*n)
a = [int(i) for i in input().split()]

for i in range(n): t[p+1]=a[i]
for i in range(p-1,0,-1): t[i] = t[2*i] =+ t[2*i+1]

a