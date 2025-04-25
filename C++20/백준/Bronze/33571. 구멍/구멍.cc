#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	string s;
	int cnt = 0;
	while (cin >> s)
	{
		for (auto& i : s)
		{
			switch (i)
			{
			case 'A':
			case 'D':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'a':
			case 'b':
			case 'd':
			case 'e':
			case 'g':
			case 'o':
			case 'p':
			case 'q':
			case '@':
				cnt++;
				break;
			case 'B':
				cnt += 2;
				break;
			}
		}
	}
	cout << cnt;
	return 0;
}