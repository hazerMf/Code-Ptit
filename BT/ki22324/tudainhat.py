l = sorted(str(i) for i in input().split())
res = 0
new = ''
for i in l:
    if len(i) > res:
        res = len(i)
        new = i
print(new,res,end='')