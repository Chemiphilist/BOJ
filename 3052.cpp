#include <iostream>

using namespace std;

int arr[42], data, cnt;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i=0; i<10; i++)
	{
		cin >> data;
		arr[data % 42]++;
	}
	for (int i=0; i<42; i++)
	{
		if (arr[i] != 0)
			cnt++;
	}
	cout << cnt;
}