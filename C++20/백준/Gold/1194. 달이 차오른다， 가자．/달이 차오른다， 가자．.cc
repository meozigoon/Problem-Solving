#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> map(n);
    pair<int, int> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> map[i];
        for (int j = 0; j < m; j++)
        {
            if (map[i][j] == '0')
                s = { i, j };
            if (map[i][j] == '1')
                cnt++;
        }
    }
    queue<tuple<pair<int, int>, int, int>> q;
    vector<vector<vector<bool>>> visited(n, vector<vector<bool>>(m, vector<bool>(1 << ('f' - 'a' + 1), false)));
    vector<int> ans;
    q.push({ s, 0, 0 });
    while (!q.empty())
    {
        auto [p, d, c] = q.front();
        q.pop();
        int x = p.first, y = p.second;
        if (x < 0 || x >= n || y < 0 || y >= m)
            continue;
        if (visited[x][y][c])
            continue;
        if (map[x][y] == '#')
            continue;
        if (map[x][y] == '1')
        {
            ans.push_back(d);
            continue;
        }
        if (map[x][y] >= 'a' && map[x][y] <= 'f')
        {
            int bit = 1 << (map[x][y] - 'a');
            c |= bit;
        }
        if (map[x][y] >= 'A' && map[x][y] <= 'F')
        {
            int bit = 1 << (map[x][y] - 'A');
            if (!(c & bit))
                continue;
        }
        visited[x][y][c] = true;
        q.push({ {x + 1, y}, d + 1, c });
        q.push({ {x - 1, y}, d + 1, c });
        q.push({ {x, y + 1}, d + 1, c });
        q.push({ {x, y - 1}, d + 1, c });
    }
    sort(ans.begin(), ans.end());
    if (ans.empty())
        cout << -1;
    else
        cout << ans[0];
    return 0;
}