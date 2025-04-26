#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    unordered_map<char, int> cnt = {
        {'K', 0},  {'k', 0}, {'P', 1}, {'p', -1}, {'N', 3}, {'n', -3}, {'B', 3}, {'b', -3}, {'R', 5}, {'r', -5}, {'Q', 9}, {'q', -9}, {'.', 0}
    };
    string s;
    int sum = 0;
	while (cin >> s)
		for (auto& c : s)
            sum += cnt[c];
    cout << sum;
    return 0;
}