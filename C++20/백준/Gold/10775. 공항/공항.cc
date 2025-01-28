#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <numeric>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int G;
	int p;
	int a;
	cin >> G >> p;
	vector<bool> g(G, false);
	vector<int> prv(G);
	iota(prv.begin(), prv.end(), 0);
	bool ch;
	int cnt = 0;
	for (int i = 0; i < p; ++i)
	{
		cin >> a;
		ch = false;
		for (int j = prv[a - 1]; j >= 0; --j)
		{
			if (!g[j])
			{
				g[j] = true;
				prv[a - 1] = j;
				ch = true;
				cnt++;
				break;
			}
		}
		if (!ch)
			break;
	}
	cout << cnt;
	return 0;
}