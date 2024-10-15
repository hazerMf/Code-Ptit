for i in range(int(input())):
    len,st = [int(i) for i in input().split()]
    list = input().split()
    for i in range(st,len):
        print(list[i],end=' ')
    for i in range(0,st):
        print(list[i],end=' ')
    print()