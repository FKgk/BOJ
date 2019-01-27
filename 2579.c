#include <stdio.h>
#include <stdlib.h>

int getMax(int a, int b)
{
	if (a > b) return a;
	else return b;
}

int main(void)
{
	int N, i, cnt = 0;

	scanf("%d", &N);
	int *star = (int *)malloc(sizeof(int) * (N+1));
	int *dp = (int *)calloc(N+2, sizeof(int));
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &star[i]);
	}
	if (N < 3)
	{
		int sum = 0;
		for (int j = 0; i < N; i++)
		{
			sum += star[j];
		}
		printf("%d\n", sum);
	}
	else
	{
		dp[1] = star[1];
		dp[2] = star[2] + star[1];
		for (i = 3; i <= N; i++)
		{
			dp[i] = getMax(dp[i - 3] + star[i - 1] + star[i], dp[i - 2] + star[i]);
		}
		printf("%d\n", dp[N]);
	}
	  

	return 0;
}
