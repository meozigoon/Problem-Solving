#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> pages(n);
    int ans = 0;
    for (int i = 0; i < n; ++i) 
    {
        cin >> pages[i];
        ans += (pages[i] + 1) / 2;
    }
    cout << ans;
    return 0;
}

