#include <iostream>

using namespace std;

int main()
{
	int a, b, c, b1, b2, b3;
	cin >> a >> b;
	c = b;
	b3 = b % 10;	b /= 10;
	b2 = b % 10;	b /= 10;
	b1 = b % 10;
	cout << a * b3 << "\n" << a * b2 << "\n" << a * b1 << "\n" << a * c;
}