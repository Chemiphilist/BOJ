#include <iostream>

using namespace std;

int main()
{
	int a = 1, b = 2;
	while (1)
	{
		cin >> a >> b;
		if (a == 0) break;
		cout << a + b << "\n";
	}
}