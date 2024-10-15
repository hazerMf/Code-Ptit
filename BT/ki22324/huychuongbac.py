a=[]
for i in range(int(input())):
    b = int(input())
    a.append(b)
aso = sorted(a)
aso.pop(-1)
print("Silver =",end=' ')
print(aso[-1])