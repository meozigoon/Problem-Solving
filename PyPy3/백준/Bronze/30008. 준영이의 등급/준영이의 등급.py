n, k = map(int, input().split())
a = list(map(int, input().split()))
for i in a:
    i *= 100
    i //= n
    if 0 <= i and i <= 4:
        res = 1
    elif i <= 11:
        res = 2
    elif i <= 23:
        res = 3
    elif i <= 40:
        res = 4
    elif i <= 60:
        res = 5
    elif i <= 77:
        res = 6
    elif i <= 89:
        res = 7
    elif i <= 96:
        res = 8
    elif i <= 100:
        res = 9
    print(res, end = ' ')