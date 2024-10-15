s = input()
c = input()
a = s.find(c)
b = s[::-1].find(c)
b = len(s)-b-1
print(str(a)+" "+str(b))