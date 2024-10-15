s1 = input().split()
s2 = input()
n = int(input())

for i in range(0,n-1):
    print(s1[i],end=' ')

print(s2,end='')

for i in range(n-1,len(s1)):
    print(s1[i],end=' ')