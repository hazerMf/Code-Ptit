n = int(input())
for i in range(n):
    for j in range(n):
        if j<i:
            print(i-j,end='')
        elif j==i:
            print(0,end='')
        else:
            print(j-i,end='')
    if i != n-1:
        print()