for _ in range(int(input())):
    len = int(input())
    l = list(int(i) for i in input().split())
    cnt = 0
    for i in range(min(l),max(l)):
        if i not in l:
            cnt+=1
    print(cnt)