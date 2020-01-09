#include <iostream>
using namespace std;

int main(void)
{
	int N, K, dp[201][201] = { 1, 0, };
	cin >> N >> K;
	
	for (int k = 1; k <= K; k++)
		for (int n = 0; n <= N; n++)
			for (int i = 0; i <= n; i++)
				dp[k][n] = (dp[k][n] + dp[k - 1][i]) % 1000000000;
	
	cout << dp[K][N] << endl;

	return 0;
}
