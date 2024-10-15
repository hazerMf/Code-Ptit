for i in range(int(input())):
    len = int(input())
    l = list(map(int,input().split()))
    l.sort()
    chk = False
    for i in range(0,len-2,2):
        if l[i] == l[i+1]: continue
        else: 
            print(l[i])
            chk = True
            break
    if chk == False:
        print(l[-1])