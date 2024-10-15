for i in range(int(input())):
    strs = input()+'!'
    cnt=1
    curr = strs[0]
    for i in range(1,len(strs)):
        if strs[i] != curr:
            print(str(cnt)+curr,end='')
            curr = strs[i]
            cnt=1
        else:
            cnt+=1
    print()