#include <iostream>
using namespace std;

int dp[10001] = { 1 };

int main(void)
{
	int n, k;
	int num[101];

	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> num[i];
	
	for (int j = 0; j < n; j++)
		for (int i = 1; i <= k; i++)
			if(i-num[j] >= 0)  
				dp[i] += dp[i-num[j]];

	cout << dp[k] << endl;
}
