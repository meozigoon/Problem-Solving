#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, q, k;
    cin >> n >> q >> k;
    vector<pair<int, int>> v(q);
    int lst = -1;
    for (int i = 0; i < q; i++)
    {
        cin >> v[i].first;
        if (v[i].first == 0)
            cin >> v[i].second;
        else
            v[i].second = 0;

        if (v[i].first == 1)
            lst = i;
    }
    vector<int> a;
    a.reserve(n);
    for (int i = 0; i < lst; i++)
    {
        if (v[i].first == 0)
            a.push_back(v[i].second);
    }
    sort(a.begin(), a.end());
    bool f = false;
    deque<int> l, r;
    for (int i = lst + 1; i < q; i++)
    {
        if (v[i].first == 0)
        {
            if (!f)
                l.push_front(v[i].second);
            else
                r.push_back(v[i].second);
        }
        else if (v[i].first == 2)
            f = !f;
    }
    int ls = l.size();
    int as = a.size();
    int rs = r.size();
    if (!f)
    {
        if (k <= ls)
            cout << l[k - 1];
        else if (k <= ls + as)
            cout << a[k - ls - 1];
        else
            cout << r[k - ls - as - 1];
    }
    else
    {
        if (k <= rs)
            cout << r[rs - k];
        else if (k <= rs + as)
            cout << a[as - (k - rs)];
        else
            cout << l[ls - (k - rs - as)];
    }
    return 0;
}