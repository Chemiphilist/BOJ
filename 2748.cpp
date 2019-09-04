#include <iostream>

using namespace std;

long long int pibo[100000];

int main()
{
	int scale;
	pibo[0] = 0;
	pibo[1] = 1;
	cin >> scale;
	if (scale == 1)
	{
		cout << 1;
		return 0;
	}
	if (scale == 2)
	{
		cout << 1;
		return 0;
	}
	for (int i = 2; i <= scale; i++)
		pibo[i] = pibo[i - 1] + pibo[i - 2];
	cout << pibo[scale];
}