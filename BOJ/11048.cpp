#include <iostream>
using namespace std;

int map[1001][1001];
int n, m;

int max(int n1, int n2) { return n1 > n2 ? n1 : n2; }

int main(void)
{
	
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
			map[i][j] += max(map[i - 1][j], map[i][j - 1]);
		}

	cout << map[n][m];

	return 0;
}
