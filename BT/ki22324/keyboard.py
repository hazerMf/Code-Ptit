import sys
fi = open('input.txt')
fo = open('output.txt','w')
sys.stdin = fi
sys.stdout = fo

s = input()
ans = len(s)
for i in range(int(input())):
    c,x=input().split()
    x=int(x)-1
    ans += (s.count(c)+x-1)//x
print(ans)

fi.close()
fo.close()