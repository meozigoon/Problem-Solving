#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    long long a, b = 0;
    long long sum = 0;
    while (n--)
    {
        cin >> a;
        if (a)
            b++;
        else
            b--;
		sum += b;
    }
	cout << sum;
    return 0;
}