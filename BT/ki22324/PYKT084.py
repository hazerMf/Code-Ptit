import sys
fi = open('DATA')
sys.stdin = fi

def base_convert(i, b):
    result = []
    while i > 0:
            result.insert(0, i % b)
            i = i // b
    return result

def binaryToDecimal(binary):
    return int(str(binary), 2)

for _ in range(int(input())):
    base = int(input())
    num = int(input())
    if base == 2:
        print(num)
    else:
        print(base_convert(binaryToDecimal(num),base))

fi.close()