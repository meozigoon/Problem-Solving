#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    unordered_map<char, bool> mp;
    mp['U'] = mp['A'] = mp['P'] = mp['C'] = true;
    string s;
    cin >> s;
    for (auto& i : s)
        mp[i] = false;
    for (auto& i : mp)
        if (i.second)
            cout << i.first;
    return 0;
}