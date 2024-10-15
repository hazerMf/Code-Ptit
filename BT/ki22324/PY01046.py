def sol(n, a, b, c):
    if n == 1:
        print(a, "->", b)
        return
    sol(n - 1, a, c, b)
    print(a, "->", b)
    sol(n - 1, c, b, a)


n = int(input())
sol(n, 'A', 'C', 'B')