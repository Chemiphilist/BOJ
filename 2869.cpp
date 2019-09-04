#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int v, a, b, cnt = 0;
	cin >> a >> b >> v;
	int Div, Exch;
	Div = (v - a) / (a - b);
	Exch = (v - a) % (a - b);
	if (Exch == 0) {
		cnt += Div + 1;
	}
	else cnt += Div + 2;
	cout << cnt;
}