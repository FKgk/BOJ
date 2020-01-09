#include <iostream>
using namespace std;

int map[101][101];
long long int num[101][101] = { 1, };

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			
			if (i + j != 2 * (n - 1))
			{
				if (i + map[i][j] < n)
					num[i + map[i][j]][j] += num[i][j];
				if (j + map[i][j] < n)
					num[i][j + map[i][j]] += num[i][j];
			}
		}
	}

	cout << num[n - 1][n - 1];

}
