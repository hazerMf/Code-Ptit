for i in range(int(input())):
    a = int(input())
    if a%2==0:
        sum = 0
        for j in range(2,a+1,2):
            sum += float(1/j)
        print("{:.6f}".format(sum))
    else:
        sum = 0
        for j in range(1,a+1,2):
            sum += float(1/j)
        print("{:.6f}".format(sum))