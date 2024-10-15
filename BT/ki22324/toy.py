n = int(input())
a = []
for i in range(n):
    a.append(list(input()))
x,y = map(int,input().split())
x-=1
y-=1
while True:
    c=a[x][y]
    a[x][y] = '*'
    if c=='.':
        print(x+1,y+1)
    if c=='E':
        y+=1
        if y>n:
            print("0")
        else : continue
    if c=='N':
        x-=1
        if x<0:
            print("0")
        else : continue
    if c=='S':
        x+=1
        if x>n:
            print("0")
        else : continue
    if c=='W':
        y-=1
        if y<0:
            print("0")
        else : continue