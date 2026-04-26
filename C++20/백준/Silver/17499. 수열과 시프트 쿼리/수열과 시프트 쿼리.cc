#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sh = 0;
    while (q--)
    {
        long long k, s, x;
        cin >> k >> s;
        switch (k)
        {
        case 1:
            cin >> x;
            a[(s - 1 + n - sh) % n] += x;
            break;
        case 2:
            sh += s;
            break;
        case 3:
            sh -= s;
            break;
        }
        sh = (sh + n) % n;
    }
    for (int i = 0; i < n; i++)
        cout << a[(i + n - sh) % n] << ' ';
    return 0;
}