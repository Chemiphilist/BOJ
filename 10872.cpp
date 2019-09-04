#include <iostream>

using namespace std;

long long int Factorial(int n)
{
	long long int tmp = 1;
	for (int i = n; i >= 1; i--)
		tmp *= i;
	return tmp;
}

int main()
{
	int a;
	cin >> a;
	cout << Factorial(a);
}