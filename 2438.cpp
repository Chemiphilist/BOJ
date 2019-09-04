#include<cstdio>

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++)
	{
		for (int k = 1; k <= i; k++)
			printf("*");
		printf("\n");
	}
}