#include <stdio.h>

int main(void)
{

	int  n;
	unsigned int answer = 0;
	unsigned int dp[10][101] = { 0 };

	scanf("%d", &n);
	
		for (int i = 0; i<10; i++)
		{
			dp[i][0] = 1;
		}
		for (int k = 0; k < n; k++)
		{
			for (int i = 0; i<10; i++)
			{
				if (i == 0)
				{
					dp[i + 1][k + 1] += (dp[i][k] % 1000000000);
				}
				else if (i == 9)
				{
					dp[i - 1][k + 1] += (dp[i][k] % 1000000000);
				}
                else
                {
                    dp[i - 1][k + 1] += (dp[i][k] % 1000000000);
					dp[i + 1][k + 1] += (dp[i][k] % 1000000000);
                }
			}
		}

		for (int j = 1; j<10; j++) // 답 구하기
		{
			answer =(answer + dp[j][n - 1]) % 1000000000;
		}
		printf("%u", answer);
    
    return 0;
}
