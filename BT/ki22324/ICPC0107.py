for i in range(int(input())):
    a,b = [i for i in input().split()]
    if(a<b):
        a,b=b,a
    ip = input().split()
    if len(ip) == 1:
        num1 = ip[0]
        num2 = input()
    else:
        num1, num2 = ip
    num1 = num1.replace(a,b)
    num2 = num2.replace(a,b)
    print(int(num1)+int(num2),end=' ')
    num1 = num1.replace(b,a)
    num2 = num2.replace(b,a)
    print(int(num1)+int(num2))