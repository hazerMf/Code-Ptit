def chk(l):
    if len(l)!=4:
        return False
    for i in range(len(l)):
        if l[i].isalpha():
            return False
        if int(l[i]) > 255:
            return False
    return True

for i in range(int(input())):
    l = list(str(i) for i in input().split("."))
    if chk(l): print("YES")
    else: print("NO")