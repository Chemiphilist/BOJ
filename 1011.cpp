#include <iostream>

using namespace std;

int main()
{
	int T, pos_x, pos_y, distance, cnt = 0, temp = 1;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> pos_x >> pos_y;
		distance = pos_y - pos_x;
		if (distance == 0) {
			cout << 0 << "\n";
			continue;
		}
		if (distance == 1) {
			cout << 1 << "\n";
			continue;
		}
		if (distance == 2) {
			cout << 2 << "\n";
			continue;
		}
		while (distance > 0) {
			distance -= 2 * temp;
			if (distance <= -temp) {
				cnt++;
			}
			else cnt += 2;
			temp++;
		}
		cout << cnt << "\n";
		cnt = 0;
		temp = 1;
	}
}