#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    string s;
    int n;
    cin >> s >> n;
    int cur, cnt = 1;
    int ans = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cur = (int)s[i];
        if ('A' <= s[i] && s[i] <= 'Z')
            cur += 10 - 'A' + '0';
        cur -= '0';
        ans += cur * cnt;
        cnt *= n;
    }
    cout << ans;
    return 0;
}