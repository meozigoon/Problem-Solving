#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    double a, b;
    double c = 299792458;
    cin >> a >> b;
    cout << fixed << setprecision(10);
    cout << (a + b) / (1 + a / c * b / c);
    return 0;
}
