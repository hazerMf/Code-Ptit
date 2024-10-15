h, m, s = [float(i) for i in input().split()]
h = h*30
m = m/60 * 30
s = s/3600 * 30
print('Angle:', h+m+s)