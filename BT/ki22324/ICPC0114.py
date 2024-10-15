import math
def sumn(a):
    sum = 0
    for i in str(a):  
      sum += int(i)  
    return sum

def prime(a):
    for i in range(2,int(math.sqrt(a)+1),1):
        if a%i==0:
            return False
    return True

for i in range(int(input())):
    n = int(input())
    if prime(n):
        if prime(int(str(n)[::-1])) and prime(sumn(n)):
            print("Yes")
        else:
            print("No")
    else:
        print("No")