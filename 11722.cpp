#include <iostream>

using namespace std;

int max(int a, int b) { return a > b ? a : b; }

int main(void)
{
	int n, i, j, ans = 1;
	int A[1001] = { 1001 }, dp[1001] = { 0, 1 };

	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> A[i];

	for (i = 2; i <= n; i++)
	{
		for (j = 0; j < i; j++)
			if (A[i] < A[j])
				dp[i] = max(dp[i], dp[j] + 1);

		if (dp[i] > ans)
			ans = dp[i];
	}

	cout << ans << endl;

	return 0;
}
