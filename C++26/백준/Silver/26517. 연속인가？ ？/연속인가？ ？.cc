#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    long long k, a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    if (k * a + b == k * c + d)
        cout << "Yes " << k * a + b;
    else
        cout << "No";
    return 0;
}
