for _ in range(int(input())):
    line = list(input().split())
    cnt = 0
    for i in line:
        if cnt+len(i)>100:
            break
        else:
            print(i,end=" ")
        cnt+=len(i)+1
    print()