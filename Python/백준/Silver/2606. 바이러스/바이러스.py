n = int(input())
t = int(input())

l = [[] for i in range(n + 1)]
for i in range(t):
    x, y = map(int, input().split())
    l[x].append(y)
    l[y].append(x)

cnt = 0
vis = [False for i in range(n + 1)]
def dfs(v):
    vis[v] = True
    global cnt
    cnt += 1
    for i in l[v]:
        if not vis[i]:
            dfs(i)

dfs(1)
print(cnt - 1)