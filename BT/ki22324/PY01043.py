def chk(a):
    if len(a)%2!=0:
        return False
    if a != a[::-1]:
        return False
    for i in a:
        if int(i)%2!=0:
            return False
    return True

for i in range(int(input())):
    n = int(input())
    for i in range(2,n,2):
        if chk(str(i)):
            print(i,end=' ')
    print()