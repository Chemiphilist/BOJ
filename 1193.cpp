#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int pos, temp, t = 2, cnt = 1;
	vector<int> loc;
	cin >> pos;
	if (pos == 1) {
		cout << "1/1";
		return 0;
	}
	temp = pos;
	while (temp >= (3 - t))
	{	
		loc.push_back(temp);
		temp -= t;
		t++;
		cnt++;
	}
	int x, y, idx;
	idx = loc[loc.size() - 2] - 2;
	x = 1 + idx;
	y = cnt - idx - 1;
	if (cnt % 2 == 0) {
		swap(x, y);
	}
	cout << x << "/" << y;
}