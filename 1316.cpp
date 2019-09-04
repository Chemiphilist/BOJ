#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int N, Group_Word = 0, t=0;
	cin >> N;
	string str;
	vector<vector<int>> alphabet(26);
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str.size() == 1) {
			Group_Word++;
			continue;
		}
		for (char c : str) {
			alphabet[(int)c].push_back(t);
			t++;
		}
		for (int i = 0; i < alphabet.size(); i++) {
			for (int j = 0; j < alphabet[i].size(); j++) {
				if (alphabet[i].empty() != 0) {
					continue; // not assigned
				}
				// idk fuck
			}
		}
		str.clear(); // clear string
		t = 0; // reset t
	}
	cout << Group_Word;
	return 0;
}