#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int n, m;
	cin >> n >> m;
	vector<long long> a(m);
	a[0] = 1;
	long long tmp, sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		sum = (sum + tmp) % m;
		a[sum] += 1;
	}
	long long cnt = 0;
	long long k;
	for (int i = 0; i < m; i++)
	{
		k = a[i];
		if (k >= 2)
			cnt += k * (k - 1) / 2;
	}
	cout << cnt;
	return 0;
}
