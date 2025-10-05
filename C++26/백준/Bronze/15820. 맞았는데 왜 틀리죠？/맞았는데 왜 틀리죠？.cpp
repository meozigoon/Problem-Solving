#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int s1, s2;
	cin >> s1 >> s2;
	bool ch1 = true, ch2 = true;
	int a, b;
	while (s1--)
	{
		cin >> a >> b;
		if (a != b)
			ch1 = false;
	}
	while (s2--)
	{
		cin >> a >> b;
		if (a != b)
			ch2 = false;
	}
	if (ch1 && ch2)
		cout << "Accepted";
	else if (!ch1)
		cout << "Wrong Answer";
	else
		cout << "Why Wrong!!!";
	return 0;
}
