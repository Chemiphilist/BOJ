#include <iostream>

using namespace std;

int main()
{
	int Input, cnt=0, Final;
	cin >> Input;
	Final = Input;
	while (1)
	{
		int Lv, Rv, tmp;
		if (Input < 10)
		{
			Lv = 0;
			Rv = Input;
		}
		else
		{
			Lv = Input / 10;
			Rv = Input % 10;
		}
		tmp = Lv + Rv;
		tmp %= 10;
		Input = Rv * 10 + tmp;
		cnt++;
		if (cnt > 0 && Input == Final)
			break;
	}
	cout << cnt;
}
