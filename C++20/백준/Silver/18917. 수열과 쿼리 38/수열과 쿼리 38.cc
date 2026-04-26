#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    unsigned long long n;
    cin >> n;
    unsigned long long x = 0, s = 0;
    for (auto i = 0; i < n; i++)
    {
        unsigned long long q, r;
        cin >> q;
        switch (q)
        {
        case 1:
            cin >> r;
            s += r;
            x ^= r;
            break;
        case 2:
            cin >> r;
            s -= r;
            x ^= r;
            break;
        case 3:
            cout << s << '\n';
            break;
        case 4:
            cout << x << '\n';
            break;
        }
    }
    return 0;
}