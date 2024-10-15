for i in range(int(input())):
    a,b = [int(x) for x in input().split()]
    tong = b*100+a
    if (tong>=321 and tong<=419):
        print("Bach Duong")
    elif (tong>=420 and tong<=520):
        print("Kim Nguu")
    elif (tong>=521 and tong<=620):
        print("Song Tu")
    elif (tong>=621 and tong<=722):
        print("Cu Giai")
    elif (tong>=723 and tong<=822):
        print("Su Tu")
    elif (tong>=823 and tong<=922):
        print("Xu Nu")
    elif (tong>=923 and tong<=1022):
        print("Thien Binh")
    elif (tong>=1023 and tong<=1122):
        print("Thien Yet")
    elif (tong>=1123 and tong<=1221):
        print("Nhan Ma")
    elif (tong>=1222 or tong<=119):
        print("Ma Ket")
    elif (tong>=120 and tong<=218):
        print("Bao Binh")
    elif (tong>=219 and tong<=320):
        print("Song Ngu")