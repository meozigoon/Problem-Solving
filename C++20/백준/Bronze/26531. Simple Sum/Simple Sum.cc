#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int a, b, c;
    char ch;
    cin >> a >> ch >> b >> ch >> c;
    if (a + b == c)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}