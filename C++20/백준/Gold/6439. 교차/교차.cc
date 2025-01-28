#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int ccw(pair<int, int> a, pair<int, int> b, pair<int, int> c)
{
	int s;
	s = a.first * b.second + b.first * c.second + c.first * a.second - a.second * b.first - b.second * c.first - c.second * a.first;
	if (s > 0)
		return 1;
	else if (s < 0)
		return -1;
	else
		return 0;
}

int cross(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3, pair<int, int> p4)
{
	pair<int, int> p[4] = { p1,p2,p3,p4 };
	int abcd = ccw(p[0], p[1], p[2]) * ccw(p[0], p[1], p[3]);
	int cdab = ccw(p[2], p[3], p[0]) * ccw(p[2], p[3], p[1]);
	if (abcd == 0 && cdab == 0)
	{
		if (p[0] > p[1])
			swap(p[0], p[1]);
		if (p[2] > p[3])
			swap(p[2], p[3]);
		if (p[1] >= p[2] && p[0] <= p[3])
			return 0;
		else
			return 1;
	}
	else if (abcd <= 0 && cdab <= 0)
		return 0;
	else
		return 1;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int t;
	cin >> t;
	pair<int, int> l[2];
	pair<int, int> r[4];
	int ch;
	while (t--)
	{
		cin >> l[0].first >> l[0].second >> l[1].first >> l[1].second;
		cin >> r[0].first >> r[0].second >> r[1].first >> r[1].second;
		if (min(r[0].first, r[1].first) <= l[0].first && l[0].first <= max(r[0].first, r[1].first) &&
			min(r[0].first, r[1].first) <= l[1].first && l[1].first <= max(r[0].first, r[1].first) &&
			min(r[0].second, r[1].second) <= l[0].second && l[0].second <= max(r[0].second, r[1].second) &&
			min(r[0].second, r[1].second) <= l[1].second && l[1].second <= max(r[0].second, r[1].second))
		{
			cout << "T\n";
			continue;
		}
		r[2].first = r[0].first;
		r[2].second = r[1].second;
		r[3].first = r[1].first;
		r[3].second = r[0].second;
		ch = cross(l[0], l[1], r[0], r[1]) * cross(l[0], l[1], r[2], r[3]);
		if (ch)
			cout << "F\n";
		else
			cout << "T\n";
	}
	return 0;
}