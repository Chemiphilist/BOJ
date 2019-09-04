#include <iostream>
#include <vector>

using namespace std;

vector<int> Plus;
long i, total;

long sum(vector<int>& a)
{
	total += a[i];
	i++;
	if (i >= a.size())
		return total;
	else sum(a);
}

int main()
{
	int T;
	cin >> T;
	for (int a = 0; a < T; a++)
	{
		int data;
		cin >> data;
		Plus.push_back(data);
	}
	cout << sum(Plus);
}

/*
제출한 코드는 아래와 같음
#include <vector>

long i, total;

long sum(std::vector<int>& a)
{
	total += a[i];
	i++;
	if (i >= a.size())
		return total;
	else sum(a);
}
*/
