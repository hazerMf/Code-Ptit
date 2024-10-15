import sys
fi = open('input.txt')
fo = open('output.txt', 'w')
sys.stdin = fi
sys.stdout = fo

a, b = map(int, input().split())
k = b-a
ans = b-k*(k-1)/2
print(ans)

fo.close()
fi.close()
