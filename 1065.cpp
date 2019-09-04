/*
�� �����ߴ٤���������������������������������
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool arr[1001];

void hansu(int n)
{
	vector<int> v, Best;
	while (n > 0) //�ڸ��� �ɰ� �ֱ�
	{
		v.push_back(n % 10);
		Best.push_back(n % 10);
		n /= 10;
	}
	sort(Best.begin(), Best.end()); //���� ��� �������� ����
	if (v == Best) //���� ���������̶��
	{
		arr[n] = true; //�ش� ���ҿ� True ǥ��
		v.clear(); //����� �ڷ�� ����
		Best.clear();
		return; //�Լ� Ż�� ����
	}
	else //�ƴϸ�
	{
		sort(Best.begin(), Best.end(), greater<int>()); //��������
		if (v == Best) //���������̶��
		{
			arr[n] = true; //�ش� ���ҿ� True ǥ��
			v.clear(); //����� �ڷ�� ����
			Best.clear();
			return; //�Լ� Ż�� ����
		}
	}
}

int main()
{
	int a, cnt=0;
	cin >> a;
	for (int k = 1; k <= a; k++)
	{
		Hansu(k); //1~a���� �Լ� ��������
	}
	for (int x = 1; x <= a; x++)
	{
		if (arr[x] == true) //�Ѽ� �������� ���Ҷ�� ������ �߰�
			cnt++;
	}
	cout << cnt; //���� ���
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