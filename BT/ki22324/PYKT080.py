from math import *
from sys import *

n, m = [int(x) for x in input().split()]
s = 0
a, q = [[0]] * n, []
b = [[-1,-1],[-1,0],[-1,1],[0,-1],[0,1],[1,-1],[1,0],[1,1]]
for i in range(n):
    a[i] = [int(x) for x in input().split()]
    for j in range(m):
        if a[i][j] == -1:
            q.append([i,j])
while len(q) > 0:
    u = q[0]
    q.pop(0)
    for i in b:
        x, y = i[0] + u[0], i[1] + u[1]
        if x >= 0 and x < n and y >= 0 and y < m:
            if a[x][y] != 0:
                s += a[x][y]
                a[x][y] = 0
print(s)