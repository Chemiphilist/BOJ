#include <iostream>
#include <list>
#include <string>

using namespace std;

list<string> Remain;

int main()
{
	int Log;
	string Name, E_L;
	ios::sync_with_stdio(false);
	cin>>Log;
	for (int i=0; i<Log; i++)
	{
		cin>>Name>>E_L;
		if (E_L=="enter")
			Remain.push_back(Name);
		if (E_L=="leave")
			Remain.remove(Name);
	}
	list<string>::iterator iter;
	for (iter=Remain.begin(); iter!=Remain.end(); iter++)
		cout<<*iter<<"\n";
	return 0;
}

// 사전순 재배열 필요 