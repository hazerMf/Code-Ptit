n = int(input())

for i in range(n):
    list = input()
    ans = 0
    sav = []
    temp = 0
    chk = 0
    for i in list:
        if i.isdigit() :
            temp = temp*10 + int(i)
            chk=1
        else:
            if chk == 1:
                sav.append(temp)
                temp = 0
                chk=0
            else:
                pass
    if chk==1:
        sav.append(temp)
    for i in sav:
        if i > ans:
            ans = i
    print(ans)