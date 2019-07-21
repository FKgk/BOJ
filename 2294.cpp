#include <iostream>
using namespace std;

int dp[10001];
int num[101];
int n, k;

int main(void)
{
	
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 1; i <= k; i++)
		dp[i] = -1;

	for (int j = 0; j < n; j++)
		for (int i = 1; i <= k; i++)
			if (i - num[j] >= 0 && dp[i - num[j]] != -1 && 
				(dp[i] == -1 || dp[i-num[j]] + 1 < dp[i]))
				dp[i] = dp[i - num[j]] + 1;

	cout << dp[k] << endl;
}
