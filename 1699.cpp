#include <iostream>
#include <cmath>
using namespace std;

int min(int a, int b) { return a < b ? a : b; }

int main(void)
{
	int N, dp[100001] = { 0 };
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		dp[i] = 2147363210;
		for (int j = 1; j <= sqrt(i); j++)
			dp[i] = min(dp[i], dp[i - j * j] + 1);
	}

	cout << dp[N] << endl;

	return 0;
}
