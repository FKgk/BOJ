#include <cstdio>

int main(void)
{
	int n, m, arr[11][11];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%1d", &arr[i][j]);
	for (int i = 0; i < n; i++)
	{
		for (int j = m - 1; j >= 0; j--)
			printf("%d",arr[i][j]);
		printf("\n");
	}

	return 0;
}
