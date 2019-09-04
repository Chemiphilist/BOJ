#include<cstdio>

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		for (int k = 1; k <= T - i; k++)
			printf(" ");
		for (int t = 1; t <= i; t++)
			printf("*");
		printf("\n");
	}
}