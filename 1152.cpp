#include <iostream>
#include <string>

using namespace std;

string s;
int cnt;

int main()
{
	getline(cin, s);
	s.push_back(' ');
	if (s.size() == 0)
	{
		cout << 0;
		return 0;
	}
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i] != ' ' && s[i + 1] == ' ')
			cnt++;
	}
	cout << cnt;
	return 0;
}