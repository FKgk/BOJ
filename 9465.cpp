#include <iostream>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int num[100001][2], dp[100001][3];

int main(void)
{
	int n, t, i, j;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (i = 0; i < 2; i++)
		{
			for (j = 1; j <= n; j++)
			{
				cin >> num[j][i];
			}
		}
		dp[0][0] =dp[0][1] = dp[0][2] = 0;
		i = 1;
		while (i <= n)
		{
			dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
			dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + num[i][0];
			dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + num[i][1];
			i++;
		}

		cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << endl;
	}
	
	return 0;
}
