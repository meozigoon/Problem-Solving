n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
ch = False
if a == b:
    print(1)
else:
    for i in range(n - 1):
        for j in range(n - i - 1):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                if a[j] == b[j] and a[j + 1] == b[j + 1]:
                    if a == b:
                        print(1)
                        ch = True
                        break
        if ch:
            break
    else:
        print(0)