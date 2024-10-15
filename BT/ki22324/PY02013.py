def chk(a):
    if a==1:
        return 1
    cnt = 1
    while a!=1:
        if(a%2==0):
            a=a/2
            cnt+=1
        else:
            a=a*3+1
            cnt+=1
    return cnt

while True:
    a = int(input())
    if a==0:
        break
    print(chk(a))