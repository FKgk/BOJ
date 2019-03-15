#include <iostream>
using namespace std;

int choco[301][301];
int min(int a, int b)
{
	if (a < b)
		return a;
	return b;
}
int main(void)
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i < 301; i++)
		choco[i][1] = choco[1][i] = i - 1;

	for (int i = 2; i < 301; i++)
	{
		for (int j = 1; j < 301; j++)
		{
			if (j % 2)
			{
				if (i % 2)
					choco[i][j] = min(choco[i][j / 2] + choco[i][j / 2 + 1], choco[i / 2][j] + choco[i / 2 + 1][j]) + 1;
				else
					choco[i][j] = min(choco[i][j / 2] + choco[i][j / 2 + 1], choco[i / 2][j] * 2) + 1;
			}
			else
			{
				if (i % 2)
					choco[i][j] = min(choco[i][j / 2] * 2, choco[i / 2][j] + choco[i / 2 + 1][j]) + 1;
				else
					choco[i][j] = min(choco[i][j / 2] * 2, choco[i / 2][j] * 2) + 1;
			}
		}
	}

	cout << choco[n][m] << endl;
    
	return 0;
}
