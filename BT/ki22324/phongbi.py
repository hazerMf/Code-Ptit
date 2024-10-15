import sys
fi = open('input.txt')
fo = open('output.txt','w')
sys.stdin=fi
sys.stdout=fo

def solve(n,m,h,w):
    ans = 0
    while h<n:
        ans+=1
        h<<=1
    while w<m:
        ans+=1
        w<<=1
    return ans

n,m,w,h=[int(i) for i in input().split()]

print(min(solve(n,m,h,w),solve(n,m,w,h)))