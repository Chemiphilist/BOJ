#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int T, h, w, n;
	cin >> T;
	while (T--) {
		cin >> h >> w >> n;
		int cnt = 0;
		vector<int> vec;
		while (n > 0) {
			vec.push_back(n);
			n -= h;
			cnt++;
		}
		cout << vec[vec.size() - 1] * 100 + cnt << "\n";
		vec.clear();
	}
}