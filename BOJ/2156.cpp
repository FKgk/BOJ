#include <iostream>
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int i, n, p[10001], dp[10001];
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> p[i];
	dp[0] = 0;
	dp[1] = p[1];
	dp[2] = p[1] + p[2];
	i = 3;
	while (i <= n)
	{
		dp[i] = max(dp[i - 1], 
			max(dp[i - 2] + p[i], dp[i-3] + p[i-1] + p[i]));
		i++;
	}
	cout << dp[n] << endl;
  
	return 0;
}
