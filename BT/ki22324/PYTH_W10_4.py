def Tong(s):
    cnt = 0
    for i in s:
        cnt += int(i)
    return cnt

while True:
    s = int(input())
    if s == -1: break
    cnt = 0
    while True:
        if Tong(str(s)) % 9 == 0: 
            print(s)
            break
        else: s += 1