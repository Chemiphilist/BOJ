#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int num, data, tmp1, tmp2;
	cin >> num;
	vector<int> v;
	for (int i = 0; i < num; i++)
	{
		cin >> data;
		v.push_back(data);
	}
	tmp1 = v[0];
	tmp2 = v[0];
	for (int k = 1; k < v.size(); k++)
	{
		if (tmp1 > v[k])
		{
			tmp1 = v[k];
		}
	}
	for (int t = 1; t < v.size(); t++)
	{
		if (tmp2 < v[t])
		{
			tmp2 = v[t];
		}
	}
	cout << tmp1 << " " << tmp2;
	return 0;
}