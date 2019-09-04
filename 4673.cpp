/*
#include <iostream>
#include <vector>

using namespace std;

vector<int> v(10050, 1);

void SelfNum (int n, vector<int> Vec)
{
	if (n>10000)
		return;
	int alpha=n+n/10+n%10;
	Vec[alpha]=0;
	SelfNum(alpha, Vec);
}

int main()
{
	for (int i=1; i<=10000; i++)
		SelfNum(i, v);
	for (int i=0; i<10000; i++)
	{
		if (v[i]==0)
			cout<<v[i]<<"\n";
	}
}
*/

#include <iostream>

using namespace std;

bool arr[10001];

int SelfNum(int n)
{
	int alpha = n;
	while (n > 0)
	{
		alpha += n % 10;
		n /= 10;
	}
	return alpha;
}

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		int p = SelfNum(i);
		if (p <= 10000)
			arr[p] = true;
	}
	for (int i = 1; i <= 10000; i++)
	{
		if (arr[i] == false)
			cout << i << "\n";
	}
}
