import sys
fi = open('input.txt')
fo = open('output.txt','w')
sys.stdin=fi
sys.stdout=fo

a,b = input().split("|")
c,d = input().split("|")
if a==c or b==d or a==d or b==c:
    print("YES")
else:
    print("NO")

fo.close()
fi.close()