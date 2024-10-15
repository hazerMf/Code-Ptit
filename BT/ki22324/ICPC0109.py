for i in range(int(input())):
    l = int(input())
    list_str = input()
    m1 = m2 = m3 = 1e9
    temp = 0
    chk = 0
    neg = 0
    for i in list_str:
        if i != ' ' :
            if i != '-':
                temp = temp*10 + int(i)
                chk=1
            else:
                neg = 1
        else:
            if chk == 1:
                if neg == 1:
                    temp = temp*-1
                    neg = 0
                if temp < m1:
                    m1, m2, m3 = temp, m1, m2
                elif temp < m2:
                    m2, m3 = temp, m2
                elif temp < m3:
                    m3 = temp
                temp = 0
                chk = 0
            else:
                pass
    if chk==1:
        if temp < m1:
            m1, m2, m3 = temp, m1, m2
        elif temp < m2:
            m2, m3 = temp, m2
        elif temp < m3:
            m3 = temp
    print(m1+m2+m3)