#include <iostream>
using namespace std;

int main(void)
{
	int n, i = 1, j, total = 0, dp[1001][10];
	
  cin >> n;
  
	for (j = 0; j < 10; j++)
		dp[0][j] = 1;
	while (i < n)
	{
		dp[i][0] = 1;
		for (j = 1; j < 10; j++)
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 10007;
		i++;
	}
	for (j = 0; j < 10; j++)
		total += dp[n - 1][j] % 10007;
	cout << total % 10007 << endl;

	return 0;
}
