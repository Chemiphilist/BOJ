#include <iostream>

using namespace std;

int main()
{
	int cnt, a, b;
	cin >> cnt;
	for (int i = 1; i <= cnt; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}
}