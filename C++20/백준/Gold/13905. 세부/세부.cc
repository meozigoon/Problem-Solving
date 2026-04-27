#include <bits/stdc++.h>

using namespace std;

vector<int> l;

int find(int x)
{
    if (x != l[x])
        l[x] = find(l[x]);
    return l[x];
}

bool same(int a, int b)
{
    return (find(a) == find(b));
}

void unite(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a < b)
        swap(a, b);
    l[b] = a;
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    l.resize(n);
    iota(l.begin(), l.end(), 0);
    int s, e;
    cin >> s >> e;
    s--, e--;
    vector<tuple<int, int, int>> ed;
    vector<vector<pair<int, int>>> v(n);
    for (int i = 0; i < m; i++)
    {
        int a, b, k;
        cin >> a >> b >> k;
        ed.push_back({ k, a - 1, b - 1 });
    }
    sort(ed.begin(), ed.end(), greater<>());
    for (auto& [k, a, b] : ed)
        if (!same(a, b))
        {
            unite(a, b);
            v[a].push_back({ b, k });
            v[b].push_back({ a, k });
        }
    queue<pair<int, int>> q;
    q.push({ s, 1000000 });
    vector<bool> vis(n, false);
    vis[s] = true;
    int mi = 0;
    while (!q.empty())
    {
        int x, cur;
        tie(x, cur) = q.front();
        q.pop();
        if (x == e)
        {
            mi = cur;
            break;
        }
        for (auto& [nx, k] : v[x])
            if (!vis[nx])
            {
                vis[nx] = true;
                q.push({ nx, min(cur, k) });
            }
    }
    cout << mi;
    return 0;
}