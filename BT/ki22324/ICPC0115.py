def chk(s):
    su = 0
    for i in s:
        temp = 1
        for j in range(1,int(i)+1):
            temp = temp*j
        su += temp
    if su==int(s):
        return "Yes"
    else:
        return "No"

for i in range(int(input())):
    s = input()
    print(chk(s))