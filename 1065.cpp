/*
焼 珊憎梅陥たたたたたたたたたたたたたたたたた
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool arr[1001];

void hansu(int n)
{
	vector<int> v, Best;
	while (n > 0) //切軒呪 舵鯵 隔奄
	{
		v.push_back(n % 10);
		Best.push_back(n % 10);
		n /= 10;
	}
	sort(Best.begin(), Best.end()); //閤精 衣引 神硯託授 舛慶
	if (v == Best) //幻鉦 神硯託授戚虞檎
	{
		arr[n] = true; //背雁 据社拭 True 妊獣
		v.clear(); //紫遂廃 切戟級 舛軒
		Best.clear();
		return; //敗呪 纏窒 繕闇
	}
	else //焼艦檎
	{
		sort(Best.begin(), Best.end(), greater<int>()); //鎧顕託授
		if (v == Best) //鎧顕託授戚虞檎
		{
			arr[n] = true; //背雁 据社拭 True 妊獣
			v.clear(); //紫遂廃 切戟級 舛軒
			Best.clear();
			return; //敗呪 纏窒 繕闇
		}
	}
}

int main()
{
	int a, cnt=0;
	cin >> a;
	for (int k = 1; k <= a; k++)
	{
		Hansu(k); //1~a猿走 敗呪 宜形左奄
	}
	for (int x = 1; x <= a; x++)
	{
		if (arr[x] == true) //廃呪 毒舛閤精 据社虞檎 鯵呪拭 蓄亜
			cnt++;
	}
	cout << cnt; //鯵呪 窒径
}
*/

#include <iostream>
#define MAX 1000

using namespace std;

bool arr[1001];

int Hansu(int n)
{
	int ARR[3] = {}, idx = 0;
	while (n > 0)
	{
		ARR[idx] = n % 10;
		n /= 10;
		idx++;
	}
	if (ARR[0] - ARR[1] == ARR[1] - ARR[2])
		return 1;
	else return 0;
}

int main()
{
	int a, cnt = 0;
	cin >> a;
	if (a < 100)
	{
		cout << a;
		return 0;
	}
	if (a == 1000)
	{
		cout << 144;
		return 0;
	}
	else cnt += 99;
	for (int i = 100; i <= a; i++)
	{
		cnt += Hansu(i);
	}
	cout << cnt;
}