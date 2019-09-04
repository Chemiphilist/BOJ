#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str1 , str2;

void Print(string i)
{
	for (int j = 0; j < i.size(); j++)
		cout << i[j];
	return;
}

int Compare(int x, string a, string b)
{
	if (a[x - 1] > b[x - 1])
	{
		Print(a);
		return 0;
	}
	else if (a[x - 1] < b[x - 1])
	{
		Print(b);
		return 0;
	}
	else return Compare(x + 1, a, b);
}

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < 3; i++)
	{
		str1.push_back(a % 10 + 48);
		str2.push_back(b % 10 + 48);
		a /= 10;
		b /= 10;
	}
	Compare(1, str1, str2);
}