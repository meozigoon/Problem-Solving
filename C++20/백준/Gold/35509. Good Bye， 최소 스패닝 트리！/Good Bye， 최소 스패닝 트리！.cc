#include <bits/stdc++.h>

using namespace std;

vector<long long> p;

long long find(long long x)
{
    if (x != p[x])
        p[x] = find(p[x]);
    return p[x];
}

bool same(long long a, long long b)
{
    return (find(a) == find(b));
}

void unite(long long a, long long b)
{
    a = find(a);
    b = find(b);
    if (a < b)
        swap(a, b);
    p[b] = a;
}

void reset(long long n)
{
    p.clear();
    for (long long i = 0; i < n; i++)
        p.push_back(i);
}

bool cmp(const tuple<long long, long long, long long, long long>& x, const tuple<long long, long long, long long, long long>& y)
{
    if (get<0>(x) == get<0>(y))
        return get<3>(x) < get<3>(y);
    return get<0>(x) > get<0>(y);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    long long n, m;
    cin >> n >> m;
    vector<tuple<long long, long long, long long, long long>> v;

    for (long long i = 1; i <= m; i++)
    {
        long long a, b, k;
        cin >> a >> b >> k;
        v.push_back({ k, a - 1, b - 1, i });
    }
    sort(v.begin(), v.end());

    reset(n);
    long long msts = 0;
    long long mw = 0;
    vector<long long> mst;

    for (auto& [k, a, b, idx] : v)
    {
        if (!same(a, b))
        {
            unite(a, b);
            msts += k;
            mw = max(mw, k);
            mst.push_back(idx);
        }
    }
    sort(v.begin(), v.end(), cmp);

    reset(n);
    long long mbsts = 0;
    vector<long long> mbst;

    for (auto& [k, a, b, idx] : v)
    {
        if (k > mw)
            continue;
        if (!same(a, b))
        {
            unite(a, b);
            mbsts += k;
            mbst.push_back(idx);
        }
    }
    cout << "NO\n";
    if (mbsts > msts)
    {
        cout << "YES\n";
        for (long long idx : mbst)
            cout << idx << '\n';
    }
    else
        cout << "NO\n";
    return 0;
}
