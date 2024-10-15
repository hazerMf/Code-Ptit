for i in range(int(input())):
    line = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    a,b = map(int,input().split())
    if a==0:
        print("0")
        continue
    ans = ''
    while a!=0 :
        temp = a%b
        ans+= line[temp]
        a //= b
    print(ans[::-1])