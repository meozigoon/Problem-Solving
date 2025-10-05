#include <iostream>
#include <vector>
#include <queue>
#define INF 2147483647

using namespace std;

vector<int> r;
void path(int s, int l)
{
	if (s != l)
		path(s, r[l]);
	cout << l + 1 << ' ';
    return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int v, e, s, l;
	cin >> v >> e;
	vector<vector<pair<int, int>>> ad(v);
	vector<int> dis(v, INF);
	r.assign(v, -1);
	int a, b, w;
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		ad[a - 1].emplace_back(b - 1, w);
	}
	cin >> s >> l;
	s--;
	l--;
	dis[s] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
	q.push({ 0, s });
	while (!q.empty())
	{
		int a = q.top().second;
		int d = q.top().first;
		q.pop();
		if (dis[a] < d)
		    continue;
		for (auto& i : ad[a])
		{
			int b = i.first;
			int w = i.second;
			if (dis[a] + w < dis[b])
			{
				r[b] = a;
				dis[b] = dis[a] + w;
				q.push({ dis[b], b });
			}
		}
	}
	cout << dis[l] << '\n';
	int cnt = 1, cur = l;
	while (cur != s)
	{
		cur = r[cur];
		cnt++;
	}
	cout << cnt << '\n';
	path(s, l);
	return 0;
}
