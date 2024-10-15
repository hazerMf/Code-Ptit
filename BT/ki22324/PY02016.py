for i in range(int(input())):
    dik = {}
    n = int(input())
    l = [int(i) for i in input().split()]
    for j in range(n):
        temp = l[j]
        if temp not in dik:
            dik[temp]=1
        else: dik[temp]+=1
    chk=0
    for j in dik:
        if dik[j]>(n/2):
            print(j)
            chk=1
    if chk == 0:
        print("NO")