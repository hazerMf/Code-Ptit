n = list(input().lower().split())
m = list(input().lower().split())


for i in n:
    i = i.lower()
for i in m:
    i = i.lower()

a = set()
for i in n:
    a.add(i)
for i in m:
    a.add(i)

u = list()
for i in a:
    u.append(i)
u.sort()
for i in u:
    print(i,end=' ')
print()

b = set()
for i in n:
    if i in m:
        b.add(i)

j = list()
for i in b:
    j.append(i)
j.sort()
for i in j:
    print(i,end=' ')
print()
