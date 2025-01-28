#include <iostream>
#include <algorithm>
#include <bit>

using namespace std;
typedef unsigned long long ull;

ull dp[55];

ull f(ull x)
{
    ull ans = x & 1;
    ull k;
    for (ull i = 54; i > 0; --i)
    {
        k = (ull)1 << i;
        if (x & k)
        {
            ans += dp[i - 1] + (x - k + 1);
            x -= k;
        }
    }
    return ans;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    ull a, b;
    cin >> a >> b;
    dp[0] = 1;
    for (ull i = 1; i < 55; ++i)
    {
        dp[i] = 2 * dp[i - 1] + ((ull)1 << i);
    }
    cout << f(b) - f(a - 1);
    return 0;
}