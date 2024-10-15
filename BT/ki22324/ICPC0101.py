length = int(input())
x = input().split()
stack = []

for i in range(length):
    a = int(x[i])
    if not stack:
        stack.append(a)
    else:
        if (stack[-1] + a) % 2 == 0:
            stack.pop()
        else:
            stack.append(a)

print(len(stack))
