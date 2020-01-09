#include <iostream>

using namespace std;

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int p[1001], dp[1001], N, i = 2;
	cin >> N;
  
	for (int i = 1; i <= N; i++)
	{
		cin >> p[i];
		dp[i] = p[i];
	}
	while (i <= N)
	{
		for (int j = 1; j < i; j++)
		{
			dp[i] = max(dp[i], dp[i - j] + p[j]);
		}
		i++;
	}
	cout << dp[N] << endl;
    
  return 0;
}
