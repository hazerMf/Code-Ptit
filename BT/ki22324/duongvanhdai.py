m=int(input())
v=int(input())
t=int(input())
d=input()
length = v*t
if d == 'C':
    print(length%m)
else: 
    print(m-(length%m))