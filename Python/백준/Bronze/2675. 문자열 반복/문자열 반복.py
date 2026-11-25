n = int(input())
for i in range(n):
    a, s = input().split()
    a = int(a)
    for j in s:
        print(j * a, end = '')
    print("")