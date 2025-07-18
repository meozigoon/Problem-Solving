#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    auto M = max_element(a.begin(), a.end()), m = min_element(a.begin(), a.end());
    if (a[0] == *m)
        cout << "ez";
    else if (a[0] == *M)
        cout << "hard";
    else
        cout << "?";
    
    return 0;
}