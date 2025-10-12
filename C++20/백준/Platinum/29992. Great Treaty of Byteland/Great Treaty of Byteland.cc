#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int ccw(tuple<long long, long long, long long>& a, tuple<long long, long long, long long>& b, tuple<long long, long long, long long>& c)
{
    long long ax, ay, t1, bx, by, t2, cx, cy, t3, s;
    tie(ax, ay, t1) = a;
    tie(bx, by, t2) = b;
    tie(cx, cy, t3) = c;
    s = ax * by + bx * cy + cx * ay - ay * bx - by * cx - cy * ax;
    if (s > 0)
        return 1;
    else if (s < 0)
        return -1;
    else
        return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    long long n;
    cin >> n;
    vector<tuple<long long, long long, long long>> p;
    p.reserve(n);
    long long x, y;
    for (long long i = 0; i < n; i++)
    {
        cin >> x >> y;
        p.emplace_back(x, y, i + 1);
    }
    sort(p.begin(), p.end());
    vector<tuple<long long, long long, long long>> u;
    vector<tuple<long long, long long, long long>> l;
    if (n == 0)
        return 0;
    else if (n == 1)
    {
        cout << 1 << '\n';
        return 0;
    }
    else
    {
        u.push_back(p[0]);
        u.push_back(p[1]);
        l.push_back(p[n - 1]);
        l.push_back(p[n - 2]);
        for (long long i = 2; i < n; i++)
        {
            for (long long j = (long long)u.size(); j >= 2 && ccw(u[j - 2], u[j - 1], p[i]) == -1; j--)
                u.pop_back();
            u.push_back(p[i]);
        }
        for (long long i = n - 3; i >= 0; i--)
        {
            for (long long j = (long long)l.size(); j >= 2 && ccw(l[j - 2], l[j - 1], p[i]) == -1; j--)
                l.pop_back();
            l.push_back(p[i]);
        }
    }
    vector<char> hull(n + 1, 0);
    for (auto& t : u)
        hull[get<2>(t)] = 1;
    for (auto& t : l)
        hull[get<2>(t)] = 1;
    for (long long id = 1; id <= n; id++)
        if (hull[id])
            cout << id << ' ';
    return 0;
}