#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        stack<int> s;
        int x = i;
        while (x != 0)
        {
            if (x % 2 == 1)
                s.push(1);
            else
                s.push(0);
            x /= 2;
        }
        if (s.empty())
            cout << 0;
        while (!s.empty())
        {
            cout << s.top();
            s.pop();
        }
    }
    return 0;
}