from math import *

n, m = map(int, input().split())

k = min(m, n)
ans = [[0 for i in range(k)] for j in range(k)]
a = [[int(i) for i in input().split()] for j in range(n)]
if n == m:
    for i in range(n):
        for j in range(m):
            print(a[i][j], end = " ")
        print()

if n > m:
    tmp = n
    idx = 0
    check = 0
    for i in range(n):
        if tmp == m: break
        if i % 2 == 0:
            tmp -= 1
            check = i
            continue
        for j in range(m):
            print(a[i][j], end = " ")
        print()
    for i in range(check + 1, n):
        for j in range(m):
            print(a[i][j], end = " ")
        print()
        
elif m > n:
    a_transpose = [[a[j][i] for j in range(n)] for i in range(m)]      
    tmp = m
    check = 0
    idx = 0
    for i in range(m):
        if tmp == n: break
        if i % 2 != 0:
            tmp -= 1
            check = i
            continue
        for j in range(n):
            ans[idx][j] = a_transpose[i][j]
        idx += 1
    for i in range(check + 1, m):
        for j in range(n):
            ans[idx][j] = a_transpose[i][j]
        idx += 1
    arr = [[ans[j][i] for j in range(n)] for i in range(n)]
    for i in range(k):
        for j in range(k):
            print(arr[i][j], end = " ")
        print()