a = input()
cnt = 0
while len(a) > 1:
    num = 0
    cnt += 1
    for i in a:
        num += ord(i) - 48
    a = str(num)
print(cnt)