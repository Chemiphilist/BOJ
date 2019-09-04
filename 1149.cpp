#include <iostream>
#include <algorithm>

#define R 0
#define G 1
#define B 2

using namespace std;

int arr[1200][3], sum[1200][3];

int main()
{
	int house, r, g, b;
    cin>>house;
    for (int i=1; i<=house; i++)
	{
		cin>>r>>g>>b;
		arr[i][R]=r;
		arr[i][G]=g;
		arr[i][B]=b;
	}
	for (int i=1; i<=house; i++)
	{
		sum[i][R]=min(sum[i-1][G], sum[i-1][B]) + arr[i][R];
		sum[i][G]=min(sum[i-1][R], sum[i-1][B]) + arr[i][G];
		sum[i][B]=min(sum[i-1][R], sum[i-1][G]) + arr[i][B];
	}
	cout<<min( min(sum[house][R], sum[house][G]), sum[house][B]);
    return 0;
}
