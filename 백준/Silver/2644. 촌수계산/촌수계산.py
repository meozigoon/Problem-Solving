n = int(input())
l = [[] for i in range(n + 1)]
a, b = map(int, input().split())
t = int(input())
for i in range(t):
    x, y = map(int, input().split())
    l[x].append(y)
    l[y].append(x)

visited = [False] * (n + 1)
ch = False

def dfs(v, cnt):
    visited[v] = True
    if v == b:
        global ch
        ch = True
        print(cnt)

    else:
        for i in l[v]:
            if not visited[i]:
                dfs(i, cnt + 1)
dfs(a, 0)
if not ch:
    print(-1)