strs = input()[::-1]
cnt=0
ans = ''
for i in range(len(strs)):
    ans = strs[i] + ans
    cnt+=1
    if cnt == 3 and i != len(strs)-1:
        ans = ',' + ans 
        cnt = 0
print(ans)