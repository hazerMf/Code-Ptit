def check(a, b):
    a, b = int(a), int(b)
    while b != 0:
        x = a % b
        a = b
        b = x
    if a == 1:
        return True
    else:
        return False

for t in range(int(input())):
    n = input()
    if check(n, n[::-1]):
        print("YES")
    else:
        print("NO")