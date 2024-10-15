def chk(a):
    if 3<=a<=4:
        return 2.5
    elif 5<=a<=6:
        return 3.0
    elif 7<=a<=9:
        return 3.5
    elif 10<=a<=12:
        return 4.0
    elif 13<=a<=15:
        return 4.5
    elif 16<=a<=19:
        return 5.0
    elif 20<=a<=22:
        return 5.5
    elif 23<=a<=26:
        return 6.0
    elif 27<=a<=29:
        return 6.5
    elif 30<=a<=32:
        return 7.0
    elif 33<=a<=34:
        return 7.5
    elif 35<=a<=36:
        return 8.0
    elif 37<=a<=38:
        return 8.5
    elif 39<=a<=40:
        return 9.0

def fi(a):
    if a<0.25:
        return 0
    if 0.25<=a<0.75:
        return 0.5
    else: 
        return 1

for i in range(int(input())):
    a,b,c,d = input().split()
    diem = (chk(int(a)) + chk(int(b)) + float(c) + float(d))/4
    fl = diem - int(diem)
    print(float(int(diem)+fi(fl)))