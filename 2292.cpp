#include <iostream>

using namespace std;

int main()
{
	int pos, t = 1, cnt = 0, level = 1;
	cin >> pos;
	if (pos == 1) {
		cout << 1;
		return 0;
	}
	while (pos > 0)
	{
		pos -= t;
		t = 6 * level++;
		cnt++;
	}
	cout << cnt;
}
