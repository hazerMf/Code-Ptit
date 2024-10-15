import math
def ele(a):
    if(a<2):
        return False
    for i in range(2,int(math.sqrt(a))+1,1):
        if a%i==0:
            return False
    return True

for i in range(int(input())):
    s = input()
    if ele(len(s)):
        cnt = 0
        for i in s:
            if i == '2' or i == '3' or i == '5' or i == '7':
                cnt+=1
        if cnt > len(s)-cnt:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")