while True:
    s = input()
    if s=="-1": break
    else: a = int(s)
    if a%11==0: print("YES")
    else: print("NO")