#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	if (T == 0) {
		cout << 0;
		return 0;
	}
	int cnt = T / 5;
	if (T % 5 == 0) {
		cout << cnt;
		return 0;
	}
	else {
		while (cnt >= 0) {
			if ((T - 5 * cnt) % 3 == 0) {
				cnt += ((T - 5 * cnt) / 3);
				break;
			}
			cnt--;
		}
	}
	cout << cnt;
}