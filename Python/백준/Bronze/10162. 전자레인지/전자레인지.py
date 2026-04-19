a = int(input())
if a % 10 == 0:
    print(a // 300, (a % 300) // 60, ((a % 300) % 60) // 10)
else:
    print(-1)