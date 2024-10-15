def run(a):
    if(a%7==0):
        return a
    for i in range(1000):
        temp = str(a) [::-1]
        a = a + int(temp)
        if(a%7==0):
            return a
    return -1

for i in range(int(input())):
    a = int(input())
    print(run(a))
