#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int points[] = { 26, 14, 10, 6, 6, 4 };
    int sum1 = 0, sum2 = 3;
    int j;
    for (int i = 0; i < 6; i++)
    {
        cin >> j;
        sum1 += points[i] * j;
    }
    for (int i = 0; i < 6; i++)
    {
        cin >> j;
        sum2 += points[i] * j;
    }
    cout << (sum1 > sum2 ? "cocjr0208" : "ekwoo");
    return 0;
}