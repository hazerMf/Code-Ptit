def Count(k,n):
    cnt = 0
    for i in range(1,k):
        dem = 0
        for char in str(i):
            dem += int(char)
        if dem == n:
            cnt+=1
    return cnt

while True:
    l = input()
    if l == "-1":
        break
    m,n = map(int,l.split())
    print(Count(m,n))