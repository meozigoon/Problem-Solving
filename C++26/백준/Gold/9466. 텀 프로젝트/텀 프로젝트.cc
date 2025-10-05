#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> f, g;
vector<bool> fin;
int num, ans;

void dfs(int x)
{
    f[x] = ++num;
    if (f[g[x]] == 0)
        dfs(g[x]);
    else if (!fin[g[x]])
        ans += f[x] - f[g[x]] + 1;
    fin[x] = true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        f.assign(n, 0);
        fin.assign(n, false);
        g.resize(n);
        num = 0;
        ans = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> g[i];
            g[i]--;
        }
        for (int i = 0; i < n; ++i)
            if (!fin[i])
                dfs(i);
        cout << n - ans << '\n';
    }
    return 0;
}
