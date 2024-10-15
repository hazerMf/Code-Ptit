l1 = list(str(i) for i in input().split())
l2 = list(str(i) for i in input().split())
temp1 = l1[-3:]
temp2 = l2[-3:]
if temp1[0]>temp2[0]:
    a = int(temp2[0])
    temp2[0] = str(a + 24)
print(int(temp2[0])*3600+int(temp2[1])*60+int(temp2[2])-int(temp1[0])*3600-int(temp1[1])*60-int(temp1[2]))