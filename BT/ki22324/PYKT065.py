def chk(x,n):
    for i in range(2,n+1):
        if x % i == 0: return False
    return True

while True:
    inp = input()
    if inp == "-1":
        break
    a,b = map(int, inp.split())
    n = int(input())
    cnt = 0
    for i in range(a,b+1):
        if chk(i,n): cnt+=1
    print(cnt)