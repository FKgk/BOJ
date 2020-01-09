#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void)
{
	int n, i, j, ans, A[1001], dp[1001] = { 0, };

	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> A[i];
    
	ans = dp[1] = A[1];
	for (i = 2; i <= n; i++)
	{
		for (j = 0; j < i; j++)
			if (A[i] > A[j])
				dp[i] = max(dp[i], dp[j] + A[i]);

		if (dp[i] > ans)
			ans = dp[i];
	}
    
	cout << ans << endl;

	return 0;
}
