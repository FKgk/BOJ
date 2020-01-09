#include <iostream>
using namespace std;

int main(void)
{
	int t, n, i = 5;
	long long int dp[101] = { 0,1,1,1,2 };
	
	cin >> t;
	while (t--)
	{
		cin >> n;
		if (dp[n] > 0)
		{
			cout << dp[n] << endl;
			continue;
		}
		
		while (i <= n)
		{
			dp[i] = dp[i - 1] + dp[i - 5];
			i++;
		}
		cout << dp[n] << endl;
	}

	return 0;
}
