#include <stdio.h>

int main(void)
{
	int n; // 테스트 범위 n부터 2n
	int cnt = 0; // 소수 판별 나눠지는 값이 있는지
	int ans = 0; // 답의 개수
	int answer = 0; // 소수의 개수
	int dp[246914] = { 0 }; // 답 저장 공간 소수인게 0 소수 아닌게 1
	int answer2[1000];
    
	dp[1] = 1;
	for (int i = 2; i <= 246912; i++)
	{
		if (dp[i] == 1) // 소수가 아니다.
		{
			continue;
		}
		else
		{
			for (int j = i + i; j <= 246912;j = j + i)
			{
				dp[j] = 1;
			}
		}
	}

	while (1)
	{
		scanf("%d", &n); // n 입력 받기
		
		if (n) 
		{
			for (int k = n + 1; k <= 2 * n; k++)
			{
				if (!dp[k])
				{
					answer++;
				}
			}
			answer2[ans] = answer;
			ans++;
			answer = 0;
		}
		else	
			break;	
	}
	for (int k = 0; k < ans; k++)
	{
		printf("%d \n", answer2[k]);
	}
  
  return 0;
}
