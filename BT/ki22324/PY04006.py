import math

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        
def distance(a,b,c):
    e1 = float(math.sqrt((a.x - b.x) ** 2 + (a.y - b.y) ** 2))
    e2 = float(math.sqrt((a.x - c.x) ** 2 + (a.y - c.y) ** 2))
    e3 = float(math.sqrt((b.x - c.x) ** 2 + (b.y - c.y) ** 2))

    if e1+e2<=e3 or e2+e3<=e1 or e1+e3<=e2:
        return "INVALID"
    else:
        res=math.sqrt((e1+e2+e3)*(e1+e2-e3)*(e2+e3-e1)*(e3+e1-e2))/4
        return "{:.2f}".format(res)


t = int(input())
ans = []
for i in range(t):
    arr = list(map(float, input().split()))
    p1 = Point(arr[0], arr[1])
    p2 = Point(arr[2], arr[3])
    p3 = Point(arr[4], arr[5])
    ans.append(distance(p1,p2,p3))

for i in ans:
    print(i)