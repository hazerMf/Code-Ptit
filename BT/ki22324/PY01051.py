for i in range(int(input())):
    dem = str(sum(int(i) for i in input()))
    if dem == dem [::-1] and len(dem)>1:
        print("YES")
    else:
        print("NO")