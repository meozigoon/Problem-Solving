#include <iostream>
#include <string>

using namespace std;

bool chP(string s)
{
    int len = s.length();
    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i])
            return false;
    return true;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    string s1 = s;
    int i;
    for (i = 0; !chP(s1); i++)
    {
        s1 = s;
        for (int j = i - 1; j >= 0; j--)
            s1 += s[j];
    }
    cout << s1.length();
    return 0;
}