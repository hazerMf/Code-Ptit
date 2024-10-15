a=[]
n=int(input())
for i in range(1,n):
    a.append(int(input()))
a.sort()
cen=1
for k in a:
    if k!=cen:
        print(cen)
        break
    else:
        cen+=1