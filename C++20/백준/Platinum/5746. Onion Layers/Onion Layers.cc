#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

int ccw(tuple<long long, long long, long long>& a, tuple<long long, long long, long long>& b, tuple<long long, long long, long long>& c)
{
    long long ax, ay, bx, by, cx, cy, s;
    tie(ax, ay, s) = a;
    tie(bx, by, s) = b;
    tie(cx, cy, s) = c;
    s = ax * by * 1LL + bx * cy * 1LL + cx * ay * 1LL - ay * bx * 1LL - by * cx * 1LL - cy * ax * 1LL;
    if (s > 0)
        return 1;
    else if (s < 0)
        return -1;
    else
        return 0;
}

void convex(vector<tuple<long long, long long, long long>>& p, const long long& n, vector<long long>& lv, long long& lvnum)
{
    vector<tuple<long long, long long, long long>> u;
    vector<tuple<long long, long long, long long>> l;
    sort(p.begin(), p.end());
    u.push_back(p[0]);
    u.push_back(p[1]);
    l.push_back(p[n - 1]);
    l.push_back(p[n - 2]);
    for (long long i = 2; i < n; i++)
    {
        for (long long j = u.size(); j >= 2 && ccw(u[j - 2], u[j - 1], p[i]) == -1; j--)
            u.pop_back();
        u.push_back(p[i]);
    }
    for (long long i = p.size() - 3; i >= 0; i--)
    {
        for (long long j = l.size(); j >= 2 && ccw(l[j - 2], l[j - 1], p[i]) == -1; j--)
            l.pop_back();
        l.push_back(p[i]);
    }
    if (u.size() + l.size() - 2 > 2)
    {
        for (auto& i : u)
        {
            lv[get<2>(i)] = lvnum;
        }
        for (auto& i : l)
        {
            lv[get<2>(i)] = lvnum;
        }
        lvnum++;
        vector<tuple<long long, long long, long long>> next;
        if (n - u.size() - l.size() + 2 >= 3)
        {
            for (auto& i : p)
            {
                if (lv[get<2>(i)] == 0)
                    next.push_back(i);
            }
            convex(next, next.size(), lv, lvnum);
        }
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    while (1)
    {
        long long n;
        cin >> n;
        if (n == 0)
            break;
        vector<tuple<long long, long long, long long>> p(n);
        vector<long long> lv(n);
        long long lvnum = 1;
        long long x, y;
        for (long long i = 0; i < n; i++)
        {
            cin >> x >> y;
            p[i] = tie(x, y, i);
        }
        convex(p, n, lv, lvnum);
        lvnum--;
        if (lvnum & 1)
            cout << "Take this onion to the lab!" << '\n';
        else
            cout << "Do not take this onion to the lab!" << '\n';
    }
    return 0;
}