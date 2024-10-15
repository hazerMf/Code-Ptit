for i in range(int(input())):
    l = list()
    w = input()
    sum = 0
    for char in w:
        if not char.isnumeric():
            l.append(char)
        else:
            sum+=int(char)
    l.sort()
    ans = ''
    for char in l:
        ans += char
    ans += str(sum)
    print(ans)