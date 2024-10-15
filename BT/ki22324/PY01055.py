def chk(s):
    if len(s)%2==0:
        return "NO"
    if s[0]==s[1]:
        return "NO"
    for i in range(len(s)):
        if i%2==0:
            if s[i]!=s[0]:
                return "NO"
        '''else:
            if s[i]==s[i-1]:
                return "NO"'''
    return "YES"

for i in range(int(input())):
    print(chk(input()))