#include<cstdio>

int main()
{
	int T, cut;
	scanf("%d %d", &T, &cut);
	for (int i = 1; i <= T; i++)
	{
		int a;
		scanf("%d", &a);
		if (a < cut) printf("%d ", a);
	}
}