s#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> ScoreData;
double mean, Count;

int main()
{
	int Case;
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> Case;
	for (int i = 0; i < Case; i++)
	{
		int Student;
		cin >> Student;
		for (int k = 0; k < Student; k++)
		{
			int score;
			cin >> score;
			ScoreData.push_back(score);
			mean += score;
		}
		mean /= Student;
		for (int t = 0; t < ScoreData.size(); t++)
		{
			if (ScoreData[t] > mean)
			{
				Count++;
			}
		}
		cout << fixed;
		cout.precision(3);
		cout << Count / Student * 100 << "%\n";
		mean = Count = 0;
		ScoreData.clear();
	}
}
