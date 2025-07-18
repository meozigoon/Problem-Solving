#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    string o = "SciComLove";
    string s;
    int cnt = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] != o[i])
            cnt++;
    cout << cnt;
    return 0;
}