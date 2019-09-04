#include <iostream>
#include <string>

using namespace std;

string str;
int Word;

int main()
{
	cin >> str;
	if (str.size() == 1) {
		cout << 1;
		return 0;
	}
	for (int i=0; i<str.size()-1; i++)
	{
		if (str[i]=='c' && str[i+1]=='=')
			Word-=1;
		if (str[i]=='c' && str[i+1]=='-')
			Word-=1;
		if (str[i]=='d' && str[i+1]=='-')
			Word-=1;
		if (str[i]=='l' && str[i+1]=='j')
			Word-=1;
		if (str[i]=='n' && str[i+1]=='j')
			Word-=1;
		if (str[i]=='s' && str[i+1]=='=')
			Word-=1;
		if (str[i]=='z' && str[i+1]=='=')
			Word-=1;
	}
	for (int i=0; i<str.size()-2; i++)
	{
		if (str[i]=='d' && str[i+1]=='z' && str[i+2]=='=')
			Word-=1;
	}
	cout << (Word += str.size());
}