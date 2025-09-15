import sys
sys.setrecursionlimit(10 ** 6)

n, m, v  = map(int, input().split())

l = [[] for i in range(n + 1)]

for i in range(m):
    x, y = map(int, input().split())
    l[x].append(y)
    l[y].append(x)


vis = [False] * (n + 1)

def dfs(p):
    vis[p] = True
    l[p].sort()
    print(p, end = ' ')
    for i in l[p]:
        if not vis[i]:
            dfs(i)

from collections import deque

def bfs(p):
    vist = [False] * (n + 1)
    dq = deque([p])
    vist[p] = True
    while dq:
        a = dq.popleft()
        print(a, end = ' ')
        l[a].sort()
        for i in l[a]:
            if not vist[i]:
                dq.append(i)
                vist[i] = True

dfs(v)
print()
bfs(v)