a = int(input())
l = sorted([float(i) for i in input().split()])
n = 0
cnt=0
for i in range(1,a-1):
    if l[i]!=l[0] and l[i]!=l[a-1]:
        n+=l[i]
    else:
        cnt+=1
print("{:.2f}".format(n/(a-2-cnt)))