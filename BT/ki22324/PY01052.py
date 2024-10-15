import math
def ele(a):
    if a < 2:
        return "NO"
    for i in range(2,int(math.sqrt(a))+1):
        if a%i==0:
            return "NO"
    return "YES"

for i in range(int(input())):
    print(ele(sum(int(i) for i in input())))