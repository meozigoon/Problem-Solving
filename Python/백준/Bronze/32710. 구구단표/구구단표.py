n = int(input())
for i in range(1, 10):
    for j in range(1, 10):
        if n == i * j:
            print(1)
            n = 0
            break
    if n == 0:
        break
if n:
    print(0)