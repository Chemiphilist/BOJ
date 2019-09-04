#include<iostream>

using namespace std;

int main()
{
	int a, tmp = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
		tmp += i;
	cout << tmp;
}