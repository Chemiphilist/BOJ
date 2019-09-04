#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stdlib.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	string str;
	char Need_to_print;
	int MAX = 0;
	cin >> str;
	vector<int> vec(128), MaxChar, Find(128), Find_s;
	for (auto& c : str)c = toupper(c);
	for (char i : str) {
		vec[(int)i]++;
	}
	for (int i : vec) {
		MAX = max(MAX, i);
	}
	for (int i : vec) {
		if (i == MAX) {
			MaxChar.push_back(i);
		}
	}
	if (MaxChar.size() > 2) {
		cout << "?";
		return 0;
	}
	else if (MaxChar.size() == 2) {
		for (char i : str) {
			Find[(int)i]++;
			if (Find[(int)i] == MAX) {
				Find_s.push_back((int)i);
				Need_to_print = i;
			}
		}
		int a = abs(Find_s[0] - Find_s[1]);
		if (a == 97 - 65) {
			Need_to_print = toupper(Need_to_print);
			cout << Need_to_print;
		}
		else {
			cout << "?";
			return 0;
		}
	}
	else {
		for (char i : str) {
			Find[(int)i]++;
			if (Find[(int)i] == MAX) {
				Need_to_print = i;
			}
		}
	}
	cout << Need_to_print;
	return 0;
}