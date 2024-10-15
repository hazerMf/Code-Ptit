a,b = map(int,input().split())
for i in range(a,b+1):
    if(i%2==0)|(i%3==1): print(i, end = ' ')