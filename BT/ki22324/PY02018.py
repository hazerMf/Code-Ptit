l = int(input())
li = sorted([int(i) for i in input().split()])
for i in range(li[0],li[0]+l+2):
    if i not in li:
        print(i)
        break