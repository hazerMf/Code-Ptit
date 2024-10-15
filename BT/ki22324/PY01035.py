n = input()
l = len(n)%3
n = "0"*(3-l) + n

temp = ""
ans = list()
for i in n:
    temp += i
    if len(temp)==3:
        if temp=='000':
            ans.append(0)
        if temp=='001':
            ans.append(1)
        if temp=='010':
            ans.append(2)
        if temp=='011':
            ans.append(3)
        if temp=='100':
            ans.append(4)
        if temp=='101':
            ans.append(5)
        if temp=='110':
            ans.append(6)
        if temp=='111':
            ans.append(7)
        temp = ""
for i in ans:
    print(i,end='')
print()