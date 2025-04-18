#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <numeric>

using namespace std;

int n, m;
string map[1001];
int f[1001][1001];
bool fin[1001][1001];
int num;
int ans;

pair<int, int> next(char c)
{
	if (c == 'D')
		return { 0, 1 };
	else if (c == 'L')
		return { -1, 0 };
	else if (c == 'R')
		return { 1, 0 };
	else
		return { 0, -1 };
}

void dfs(int y, int x)
{
	f[y][x] = ++num;
	pair<int, int> ne = next(map[y][x]);
	int nx = x + ne.first;
	int ny = y + ne.second;
	if (!f[ny][nx])
		dfs(ny, nx);
	else if (!fin[ny][nx])
		ans++;
	fin[y][x] = true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		cin >> map[i];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			if (!f[i][j])
				dfs(i, j);
	cout << ans;
	return 0;
}
