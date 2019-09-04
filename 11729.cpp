#include <iostream>

using namespace std;

int cnt;

int Hanoi_Count(int n, int a, int b, int c)
{
	if (n == 1)
	{
		cnt++;
		return cnt;
	}
	else
	{
		Hanoi_Count(n - 1, a, c, b);
		cnt++;
		Hanoi_Count(n - 1, b, a, c);
	}
}


void Hanoi_Move(int n, int a, int b, int c)
{
	if (n == 1)
	{
		cnt++;
		cout << a << " " << c << "\n";
	}
	else
	{
		Hanoi_Move(n - 1, a, c, b);
		cout << a << " " << c << "\n";
		cnt++;
		Hanoi_Move(n - 1, b, a, c);
	}
	return;
}

int main()
{
	int a;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> a;
	cout << Hanoi_Count(a, 1, 2, 3) << "\n";
	Hanoi_Move(a, 1, 2, 3);
	return 0;
}