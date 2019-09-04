#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	string str;
	cin >> str;
	vector<int> v;
	for (int i = 97; i <= 122; i++) {
		if (str.find((char)i) == std::string::npos)
			v.push_back(-1);
		else v.push_back(str.find((char)i));
	}
	for (auto i : v) {
		cout << i << " ";
	}
}