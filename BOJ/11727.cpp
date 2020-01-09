#include <iostream>

using namespace std;

int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int n, i = 2, dp[1001] = { 1, 1 };
	cin >> n;
	while (i <= n)
	{
		dp[i] = (dp[i - 1] + dp[i - 2] * 2) % 10007;
		i++;
	}

	cout << dp[n] << endl;

	return 0;
}
