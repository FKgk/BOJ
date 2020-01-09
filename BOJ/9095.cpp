#include <iostream>
using namespace std;

int main(void)
{
	int T, n, i = 3, dp[11] = { 1, 1, 2, 4 };
	cin >> T;
	while (T--)
	{
		cin >> n;
		while (i <= n)
		{
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
			i++;
		}

		cout << dp[n] << endl;
	}
	
	return 0;
}
