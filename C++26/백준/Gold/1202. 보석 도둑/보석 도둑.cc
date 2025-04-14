#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <numeric>
#include <cmath>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a > b)
		return true;
	return false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> j(n);
	multiset<int> c;
	int m, v, a;
	long long ans = 0;
	for (int i = 0; i < n; ++i)
		cin >> j[i].second >> j[i].first;
	sort(j.begin(), j.end(), cmp);
	for (int i = 0; i < k; ++i)
	{
		cin >> a;
		c.insert(a);
	}
	multiset<int>::iterator it;
	for (auto& i : j)
	{
		tie(v, m) = i;
		it = c.lower_bound(m);
		if (it != c.end())
		{
			ans += v;
			c.erase(it);
		}
	}
	cout << ans;
	return 0;
}
