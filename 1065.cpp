/*
아 뻘짓했다ㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏㅏ
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool arr[1001];

void hansu(int n)
{
	vector<int> v, Best;
	while (n > 0) //자리수 쪼개 넣기
	{
		v.push_back(n % 10);
		Best.push_back(n % 10);
		n /= 10;
	}
	sort(Best.begin(), Best.end()); //받은 결과 오름차순 정렬
	if (v == Best) //만약 오름차순이라면
	{
		arr[n] = true; //해당 원소에 True 표시
		v.clear(); //사용한 자료들 정리
		Best.clear();
		return; //함수 탈출 조건
	}
	else //아니면
	{
		sort(Best.begin(), Best.end(), greater<int>()); //내림차순
		if (v == Best) //내림차순이라면
		{
			arr[n] = true; //해당 원소에 True 표시
			v.clear(); //사용한 자료들 정리
			Best.clear();
			return; //함수 탈출 조건
		}
	}
}

int main()
{
	int a, cnt=0;
	cin >> a;
	for (int k = 1; k <= a; k++)
	{
		Hansu(k); //1~a까지 함수 돌려보기
	}
	for (int x = 1; x <= a; x++)
	{
		if (arr[x] == true) //한수 판정받은 원소라면 개수에 추가
			cnt++;
	}
	cout << cnt; //개수 출력
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