n = input()
l,u=0,0
for i in range(len(n)):
    if n[i].isupper():
        u+=1
    else:
        l+=1
if(u>l):
    print(n.upper())
else:
    print(n.lower())