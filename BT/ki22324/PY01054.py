def chk(a):
    ans = 1
    for i in a:
        if int(i)!=0:
            ans = ans * int(i)
    return ans
    
for i in range(int(input())):
    print(chk(input()))