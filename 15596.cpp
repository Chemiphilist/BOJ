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
������ �ڵ�� �Ʒ��� ����
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
