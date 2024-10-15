a,b= input().split()
l = sorted(list({int(i) for i in input().split()}))
n = len(l)

def Try(s,a):
    if len(s)==int(b):
        print(*s)
        return
    for i in range(a,n):    
        Try(s+[l[i]],i+1)

Try([],0)