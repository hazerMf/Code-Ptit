x1,y1,r1 = map(int,input().split())
x2,y2,r2 = map(int,input().split())

d = ((x1-x2)**2 + (y1-y2)**2)**0.5

if r1 > r2 : r1, r2 = r2, r1

