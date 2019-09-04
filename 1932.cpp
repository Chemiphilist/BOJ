#include <iostream>
#include <algorithm>

using namespace std;

int arr[600][600];

int main()
{
	int T, data, Max=0;
	ios::sync_with_stdio(false);	cin.tie(0);
	cin>>T;
	for (int i=1; i<=T; i++)
	{
		for (int k=1; k<=i; k++)
		{
			cin>>data;
			arr[i][k]=data;
			arr[i][k]=max(arr[i-1][k-1], arr[i-1][k])+arr[i][k];
			Max=max(arr[i][k], Max);
		}
	}
	/*
	for (int i=1; i<=T; i++)
	{
		for (int k=1; k<=i; k++)
			cout<<arr[i][k];
		cout<<"\n";
	}
	*/
	cout<<Max;
	return 0;
}

/*
7
10 15
18 16 15
20 25 20 19
24 30 27 26 24
*/