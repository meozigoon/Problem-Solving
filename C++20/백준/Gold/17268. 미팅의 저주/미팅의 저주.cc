#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

long long dp[10001];

long long c(long long n)
{
	if (!dp[n])
	{
		for (int i = 0; i < n; i++)
		{
			dp[n] += c(i) * c(n - i - 1) % 987654321;
			dp[n] %= 987654321;
		}
	}
	return dp[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	dp[0] = dp[1] = 1;
	cin >> n;
	cout << c(n / 2);
	return 0;
}