def ele(num):
    for i in range(2,num,1):
        if num%i==0:
            return False
    return True

def chk(n):
    s = 0
    for i in range(len(n)):
        if i%2!=int(n[i])%2:
            return False
        s += int(n[i])
    if ele(s):
        return True
    return False
        
for i in range(int(input())):
    n = input()
    if chk(n):
        print("YES")
    else:
        print("NO")