#include <iostream>

using namespace std;

int main()
{
	int a, tmp1 = 0, tmp2 = 0, arr[8] = {}, asc[8] = { 1,2,3,4,5,6,7,8 }, des[8] = { 8,7,6,5,4,3,2,1 };
	for (int i = 0; i < 8; i++)
	{
		cin >> a;
		arr[i] = a;
	}
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == asc[i])
			tmp1++;
		if (arr[i] == des[i])
			tmp2++;
	}
	if (tmp1 == 8)
		cout << "ascending";
	else if (tmp2 == 8)
		cout << "descending";
	else cout << "mixed";
}