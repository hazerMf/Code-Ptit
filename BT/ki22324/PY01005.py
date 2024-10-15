def ele(num):
    dem = 0
    for i in num:
        if (i=='4' or i=='7'):
            dem += 1
    if(dem==4 or dem==7):
        print("YES")
    else:
        print("NO")
    

a = input()
ele(a)