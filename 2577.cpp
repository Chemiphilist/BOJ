#include <iostream>

using namespace std;

int arr[15];

int main()
{
	int a, b, c, data;
	cin >> a >> b >> c;
	data = a * b * c;
	for (data; data > 0; )
	{
		int put = data % 10;
		arr[put]++;
		data /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}