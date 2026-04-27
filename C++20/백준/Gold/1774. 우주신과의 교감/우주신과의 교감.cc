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
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p.push_back({ x, y });
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--, b--;
        unite(a, b);
    }
    vector<tuple<double, int, int>> e;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (!same(i, j))
                e.push_back({ hypot(p[i].first - p[j].first, p[i].second - p[j].second), i, j });
    sort(e.begin(), e.end());
    double ans = 0;
    for (auto& [d, a, b] : e)
        if (!same(a, b))
        {
            unite(a, b);
            ans += d;
        }
    cout << fixed << setprecision(2) << ans;
    return 0;
}