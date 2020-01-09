#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void)
{
	int n, i, j, ans = 1, A[1001], dp[1001][2] = { {0, 0}, {1, 1}, };

	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> A[i];

	dp[n][0] = dp[n][1] = 1;
	dp[n + 1][0] = dp[n + 1][1] = 0;
	for (i = 2; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (A[i] > A[j])
				dp[i][0] = max(dp[i][0], dp[j][0] + 1);
			if (A[n - i + 1] > A[n - j + 1])
				dp[n - i + 1][1] = max(dp[n - i + 1][1], dp[n - j + 1][1] + 1);
		}
	}

	for (int i = 1; i <= n; i++)
		if (dp[i][0] + dp[i][1] - 1 > ans)
			ans = dp[i][0] + dp[i][1] - 1;
	
	cout << ans << endl;

	return 0;
}
