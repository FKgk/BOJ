#include <iostream>
using namespace std;

int dp[100][3];
int main(void)
{
	int n;

	cin >> n;
	dp[1][0] = 0;
	dp[1][2] = dp[1][1] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				int t = (dp[i - 1][j] + k) % 3;
			
				dp[i][t] += dp[i - 1][j];
			}
		}
	}
	
	cout << dp[n][0] << endl;
}
