#include <iostream>
#include <algorithm>

using namespace std;

double mean, MaxScore;

int main()
{
	int T;
	double data;
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin>>T;
	for (int i=0; i<T; i++)
	{
		cin>>data;
		mean+=data;
		MaxScore=max(MaxScore, data);
	}
	mean=mean/T;
	cout<<fixed;
	cout.precision(2);
	cout<<mean/MaxScore*100;
}
