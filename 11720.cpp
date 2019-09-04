#include <iostream>
#include <string>

using namespace std;

string arr;

int main()
{
	int a, sum = 0;
	cin >> a;
	cin >> arr;
	for (int i = 0; i < arr.size(); i++)
	{
		sum += ((int)arr[i] - 48);
	}
	cout << sum;
}