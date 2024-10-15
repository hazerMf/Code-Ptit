def ele(num):
    for i in range(len(num)):
        if num[i] != '4' and num[i] != '7':
            return False
    return True

for i in range(int(input())):
    a = input()
    if ele(a):
        print("YES")
    else:
        print("NO")  