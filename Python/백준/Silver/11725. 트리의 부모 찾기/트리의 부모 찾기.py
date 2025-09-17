import sys
sys.setrecursionlimit(10**6)

n = int(input())
l = [[] for i in range(n + 1)]
par = [0] * (n + 1)

for i in range(n - 1):
    x, y = map(int, input().split())
    l[x].append(y)
    l[y].append(x)

vis = [False] * (n + 1)

def dfs(v, p):
    vis[v] = True
    global par
    par[v] = p
    for i in l[v]:
        if not vis[i]:
            dfs(i, v)


dfs(1, 0)
for i in par[2:]:
    print(i)