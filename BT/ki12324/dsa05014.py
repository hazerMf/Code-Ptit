def catalan(n):
    if n <= 1:
        return 1
    res = 0
    for i in range(n):
        res += catalan(i) * catalan(n-i-1)
    return res

runs = int(input())
for i in range(runs):
    n = int(input())
    print(catalan(n), end='\n')