from math import *

for _ in range(int(input())):
    n, m, k = map(int, input().split())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    c = [int(i) for i in input().split()]
    idx1, idx2 = 0, 0
    d,e = [], []
    while idx1 < len(a) and idx2 < len(b) :
        if a[idx1] == b[idx2]:
            d.append(a[idx1])
            idx1 += 1
            idx2 += 1
        elif a[idx1] < b[idx2]: idx1 += 1
        else: idx2 += 1
    check = True
    if len(d) == 0: check = False
    if not check: print("NO")
    else:
        idx1, idx2 = 0, 0
        while idx1 < len(d) and idx2 < len(c):
            if d[idx1] == c[idx2]:
                e.append(c[idx2])
                idx1 += 1
                idx2 += 1
            elif d[idx1] < c[idx2]: idx1 += 1
            else: idx2 += 1
        check = True
        if len(e) == 0: check = False
        if not check: print("NO")
        else: 
            for i in e: print(i, end = " ")
            print()