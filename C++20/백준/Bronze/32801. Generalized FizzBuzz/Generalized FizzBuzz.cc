#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, a, B;
    cin >> n >> a >> B;
    int fb = 0, f = 0, b = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % a == 0 && i % B == 0)
            fb++;
        else if (i % a == 0)
            f++;
        else if (i % B == 0)
            b++;
    }
    cout << f << ' ' << b << ' ' << fb;
    return 0;
}