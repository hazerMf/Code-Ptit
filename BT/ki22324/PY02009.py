for i in range(int(input())):
    dik = {}
    n=int(input())
    for j in range(n):
        a = int(input())
        if a not in dik:
            dik[a]=1
        else:
            dik[a]+=1
    ans,cnt = 0,0
    for j in dik:
        if dik[j]>cnt:
            cnt = dik[j]
            ans = j
        elif dik[j]==cnt and j<ans:
            ans = j
    print(ans)
