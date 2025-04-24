n = int(input())
s = input().split()
for i in range(5 - n):
    s.append(0)
k, m, e, s, f = map(int, s)
ans = f * 707
if k > e:
    ans += (k - e) * 508
else:
    ans += (e - k) * 108
if m > s:
    ans += (m - s) * 212
else:
    ans += (s - m) * 305
print(ans * 4763)