n = int(input())
row = [0] * n
col = [0] * n
ans = 0
for i in range(n):
    line = list(input())
    for j in range(len(line)):
        if(line[j]=='C'):
            ans += row[i] + col[j]
            col[j]+=1
            row[i]+=1
print(ans)