#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (s1[i] != s2[i])
            cnt++;
    cout << cnt;
    return 0;
}