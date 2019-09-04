#include <iostream>
#include <string>

using namespace std;

string str;
int Time;

int main()
{
	cin>>str;
	for (int i=0; i<str.size(); i++)
	{
		if (str[i]==90)
			Time+=10;
		else if (str[i]<80)
			Time+=((str[i]-65)/3)+3;
		else if (str[i]>=80 && str[i]<=83)
			Time+=8;
		else if (str[i]>=84 && str[i]<=86)
			Time+=9;
		else Time+=10;
	}
	cout<<Time;
}
