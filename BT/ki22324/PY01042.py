def chk(a):
    for i in a:
        if i != "0" and i != "1" and i != "2":
            return "NO"
    return "YES"

for i in range(int(input())):
    a = input()
    print(chk(a))