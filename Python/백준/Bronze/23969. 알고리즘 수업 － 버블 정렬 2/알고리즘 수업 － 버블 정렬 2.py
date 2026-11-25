n, k = map(int, input().split())
a = list(map(int, input().split()))
cnt = 0
for i in range(len(a)):
    for j in range(len(a) - i - 1):
        if a[j] > a[j + 1]:
            a[j], a[j + 1] = a[j + 1], a[j]
            cnt += 1
        if cnt == k:
            for x in a:
                print(x, end=' ')
            break
    if cnt == k:
        break
if cnt != k:
    print(-1)