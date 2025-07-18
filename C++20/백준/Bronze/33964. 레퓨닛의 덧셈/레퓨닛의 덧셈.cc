#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < abs(a - b); i++)
        cout << 1;
    for (int i = 0; i < min(a, b); i++)
        cout << 2;
    return 0;
}