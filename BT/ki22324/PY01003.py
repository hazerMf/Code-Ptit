for i in range(int(input())):
    n = list(int(i) for i in input())
    for i in range(len(n)-1,0,-1):
        if n[i]>=5:
            n[i-1]+=1
        n[i]=0
    if n[0]==10:
        n[0] = 0
        n= [1] + n
    for i in n:
        print(i, end='')
    print()