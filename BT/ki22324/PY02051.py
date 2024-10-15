# tinh tong nua tren = sum
# chia cho n - 1
# tong tung hang - sum
# chia cho n - 1 => a[i]

n = int(input())
m = [0]*n

for i in range(n):
    line = list(int(j) for j in input().split())
    m[i] = line

sum = 0
l1 = 0

for i in range(n):
    for j in range(n):
        sum += m[i][j]

for i in range(n):
    l1+=m[0][i]

sum = sum/2
sum = int(sum/(n-1))

ans = [0]*n

ans[0] = int((l1-sum) / max(n-2,1))

for i in range(1,n):
    ans[i]=m[0][i]-ans[0]

for i in range(n):
    print(ans[i],end=' ')