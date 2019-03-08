#include <iostream>
using namespace std;

int num[1001][1001] = { 0, 1, };

int main(void)
{
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i + 1; j++)
			num[i][j] = (num[i - 1][j] + num[i - 1][j - 1]) % 10007;

	cout << num[n][k + 1] << endl;
}
