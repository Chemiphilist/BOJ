#include <iostream>
#include <string>

using namespace std;

string Result;
int score, tmp=1;

int main()
{
	int T;
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> Result;
		for (int k = 0; k < Result.size(); k++)
		{
			if (Result[k] == 'O')
			{
				score += tmp;
				tmp++;
			}
			else
			{
				tmp = 1;
			}
		}
		cout << score << "\n";
		score = 0;
		tmp = 1;
	}
}
