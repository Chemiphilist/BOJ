#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000010];

int main()
{
    int a;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>a;
    if (a==1)
    {
        cout<<0;
        return 0;
    }
    if (a==2 || a==3)
    {
        cout<<1;
        return 0;
    }
    for (int i=2; i<=a; i++)
	{
		arr[i]=arr[i-1]+1;
		if (i%2==0)	arr[i]=min(arr[i], arr[i/2]+1);
		if (i%3==0)	arr[i]=min(arr[i], arr[i/3]+1);
	}
	cout<<arr[a];
}
