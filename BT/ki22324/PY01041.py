def chk(a):
    sw = 0
    if len(a) <= 3:
        return "NO"
    for i in range(1,len(a)):
        if sw==0:
            if int(a[i]) == int(a[i-1]):
                return "NO"
            elif int(a[i]) > int(a[i-1]):
                pass
            elif int(a[i]) < int(a[i-1]):
                sw = 1
        elif sw == 1:
            if int(a[i]) == int(a[i-1]):
                return "NO"
            elif int(a[i]) > int(a[i-1]):
                return "NO"
            elif int(a[i]) < int(a[i-1]):
                pass
    return "YES"

for i in range(int(input())):
    a = input()
    print(chk(a))