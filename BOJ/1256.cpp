#include <iostream>
#include <string>
#include <algorithm>
#define MAX_K 1000000010
using namespace std;

int N, M, K;
int pascal[202][202];

void calPascal()
{
	for (int i = 0; i <= N + M; i++)
	{
		pascal[i][0] = pascal[i][i] = 1;

		for (int j = 1; j < i; j++)
			pascal[i][j] = min(MAX_K, pascal[i - 1][j - 1] + pascal[i - 1][j]);
	}
}

string solve(int n, int m, int skip)
{
	if (n == 0)
		return string(m, 'z');

	if (skip <= pascal[n + m - 1][n - 1])
		return "a" + solve(n - 1, m, skip);

	return "z" + solve(n, m - 1, skip - pascal[n + m - 1][n - 1]);
}
int main(void)
{
	cin >> N >> M >> K;
	
	calPascal();

	if (pascal[N + M][N] < K)
		cout << "-1" << endl;
	else
		cout << solve(N, M, K);

	return 0;
}
