#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> adj[100000];
int cnt;
unsigned long long sum;
queue<int> q;

void bfs(int s, vector<long long>& ord, vector<long long>& d)
{
	ord[s] = ++cnt;
	d[s] = 0;
	q.push(s);
	int u;
	while (!q.empty())
	{
		u = q.front();
		q.pop();
		sort(adj[u].begin(), adj[u].end());
		for (int i : adj[u])
		{
			if (d[i] == -1)
			{
				q.push(i);
				ord[i] = ++cnt;
				d[i] = d[u] + 1;
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m, r;
	cin >> n >> m >> r;
	int a, b;
	vector<long long> ord(n, 0);
	vector<long long> depth(n, -1);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		adj[a - 1].push_back(b - 1);
		adj[b - 1].push_back(a - 1);
	}
	bfs(r - 1, ord, depth);
	for (int i = 0; i < n; i++)
		sum += ord[i] * depth[i];
	cout << sum;
}