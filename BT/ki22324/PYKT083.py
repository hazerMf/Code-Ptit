chk = dict()

l = []

for _ in range(int(input())):
    line = list(input().split())
    l.append(line)

days = set()
for line in l:
    days.add(line[4])

for day in days:
    chk[day]=0

for line in l: 
    if line[3] == "OUT":
        continue
    else: 
        if line[1]=="Xe_con" and line[2]=="5":
            chk[line[4]] += 10000
        if line[1]=="Xe_con" and line[2]=="7":
            chk[line[4]] += 15000
        if line[1]=="Xe_tai" and line[2]=="2":
            chk[line[4]] += 20000
        if line[1]=="Xe_khach" and line[2]=="29":
            chk[line[4]] += 10000
        if line[1]=="Xe_khach" and line[2]=="45":
            chk[line[4]] += 10000

srt_chk = sorted(chk.items())

for day, earnings in srt_chk:
    print(f"{day}: {earnings}")