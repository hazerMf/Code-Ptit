base = '0123456789ABCDEF'
for i in range(int(input())):
    b = int(input())
    x = input()
    if b==2:
        print(x)
    elif b==4:
        ans = ''
        a = len(x)%2
        if a!=0:
            for j in range(2-a):
                x='0'+x
        cnt = 1
        temp = 0
        for j in x:
            if j=='1':
                temp = temp + (2**cnt)
            else:
                pass
            cnt-=1
            if cnt < 0:
                cnt = 1
                ans = ans + base[temp]
                temp=0
        print(ans)
    elif b==8:
        ans = ''
        a = len(x)%3
        if a!=0:
            for j in range(3-a):
                x='0'+x
        cnt = 2
        temp = 0
        for j in x:
            if j=='1':
                temp = temp + (2**cnt)
            else:
                pass
            cnt-=1
            if cnt < 0:
                cnt = 2
                ans = ans + base[temp]
                temp=0
        print(ans)
    elif b==16:
        ans = ''
        a = len(x)%4
        if a!=0:
            for j in range(4-a):
                x='0'+x
        cnt = 3
        temp = 0
        for j in x:
            if j=='1':
                temp = temp + (2**cnt)
            else:
                pass
            cnt-=1
            if cnt < 0:
                cnt = 3
                ans = ans + base[temp]
                temp=0
        print(ans)