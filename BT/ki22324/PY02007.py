a = []
while True:
    temp = list(int(i) for i in input().split())
    a.extend(temp)
    if len(a) >= 10:
        break
ans = set()
for i in a:
    b = i%42
    ans.add(b)
print(len(ans))