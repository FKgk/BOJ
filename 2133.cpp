#include <iostream>
using namespace std;

int main(void)
{
	int n, i, dp[32] = { 0,0,3,0 };
	cin >> n;
	if (n % 2)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 4; i <= n; i+=2)
	{
		dp[i] = dp[i - 2] * 3 + 2;
		for (int j = 4; j <= i; j += 2)
		{
			dp[i] += dp[i - j] * 2;
		}
	}
	cout << dp[n] << endl;

	return 0;
}
