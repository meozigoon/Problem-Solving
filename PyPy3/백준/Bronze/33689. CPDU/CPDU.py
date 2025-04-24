n = int(input())
ans = 0
for i in range(n):
    tmp = input()
    if tmp[0] == 'C':
        ans += 1
print(ans)