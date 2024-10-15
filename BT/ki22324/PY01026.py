ans=list()
for _ in range(int(input())):
    m = sorted(input())
    n = sorted(input())
    if m == n:
        ans.append("Test "+str(_+1)+": YES")
    else:
        ans.append("Test "+str(_)+": NO")
for i in ans:
    print(i)