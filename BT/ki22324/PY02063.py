n = int(input())
l = list(int(i) for i in input().split())
l.sort()
x1=l[0]*l[1]
x2=l[-1]*l[-2]
x3=l[-1]*l[-2]*l[-3]
x4=l[0]*l[1]*l[-1]
x = max(x1,x2,x3,x4)
print(x)