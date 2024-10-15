while True:
    s = input()
    if s=="-1": break
    else : x,y = s.split()
    a=0
    for i in x:
        a+= int(i)
    print(int(int(y)/int(a)))