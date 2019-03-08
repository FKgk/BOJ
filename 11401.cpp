#include <iostream>
using namespace std;
#define mod 1000000007LL

long long func(long long a, long long b)
{
	long long ans = 1;

	while(b > 0)
	{
		if (b % 2)
			ans = (ans * a) % mod;
		a = (a * a) % mod;
		b /= 2;
	}

	return ans;
}

int main(void)
{
	int n, k, m, i;
	long long A = 1, B = 1;
	cin >> n >> k;
	m = n - k;

	for (i = 2; i <= n; i++)
		A = (A * i) % mod;

	for (i = 2; i <= k; i++)
		B = (B * i) % mod;

	for (i = 2; i <= m; i++)
		B = (B * i) % mod;

	cout << A * func(B, mod - 2) % mod << endl;
}
