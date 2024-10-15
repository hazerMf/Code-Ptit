def chk(n):
    for i in range(len(n)-1):
        if n[i]>n[i+1]:
            return False
    return True
for i in range(int(input())):
    n = input()
    if chk(n):
        print("YES")
    else:
        print("NO")