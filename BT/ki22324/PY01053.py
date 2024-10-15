def chk(a):
    if a%3==0:
        return "YES"
    return "NO"

for i in range(int(input())):
    print(chk(sum(int(i) for i in input())))