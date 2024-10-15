for i in range(int(input())):
    n,m =  map(int, input(). split())
    x = []
    for j in range(n):
        line = list(map(int, input().split()))
        x.append(line)
    h = []
    for j in range(3):
        line = list(map(int, input().split()))
        h.append(line)
        
    ans = [[0] * (m - 2) for _ in range(n - 2)]

    for j in range(1,n-1):
        for k in range(1,m-1):
            temp = 0
            for a in range(3):
                for b in range(3):
                    temp += (h[a][b]*x[j+a-1][k+b-1])
            ans[j-1][k-1] = temp

    num = 0
    for j in ans:
        for k in j:
            num += k
    print(num)