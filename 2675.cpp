#include <iostream>
#include <string>

using namespace std;

string str;

int main()
{
	int T, rpt;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> rpt;
		cin >> str;
		for (int k = 0; k < str.size(); k++)
		{
			for (int t = 0; t < rpt; t++)
			{
				cout << str[k];
			}
		}
		str.clear();
		cout << "\n";
	}
}