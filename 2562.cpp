#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v, srt;

int main()
{
	int a, i = 0, j = 0;
	while (i < 9)
	{
		cin >> a;
		v.push_back(a);
		srt.push_back(a);
		i++;
	}
	sort(srt.begin(), srt.end());
	while (j < 9)
	{
		if (srt[8] == v[j])
		{
			cout << srt[8] << "\n" << j + 1;
			break;
		}
		j++;
	}
}