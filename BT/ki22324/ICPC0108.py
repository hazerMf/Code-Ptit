for i in range(int(input())):
    s = int(input())
    l = sorted([int(i) for i in input().split()])
    cnt = 0
    for i in range(s-2):
        left, right = i+1, s-1
        while left < right:
            tmp = l[i] + l[left] + l[right]
            if not tmp:
                cnt += 1
                left += 1
            elif tmp < 0:
                left += 1
            else:
                right -= 1
    print(cnt)