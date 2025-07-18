#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    vector<vector<int>> ans(n, vector<int>(m, -1));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int x2, y2;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 2)
            {
                x2 = i;
                y2 = j;
            }
            else if (v[i][j] == 0)
                ans[i][j] = 0;
        }
    queue<pair<int, int>> q;
    q.push({x2, y2});
    ans[x2][y2] = 0;
    visited[x2][y2] = true;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    while(!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || visited[nx][ny] || v[nx][ny] == 0)
                continue;
            visited[nx][ny] = true;
            ans[nx][ny] = ans[x][y] + 1;
            q.push({nx, ny});
        }
    }

    for (auto& i : ans)
    {
        for (auto& j : i)
            cout << j << ' ';
        cout << '\n';
    }
    return 0;
}