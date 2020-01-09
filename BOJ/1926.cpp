#include <cstdio>

int img[501][501];
int n, m;

int dx[] = { 0,0, 1, -1 };
int dy[] = { 1,-1,0,0 };

int search(int x, int y, int cnt)
{
	int ans = cnt;
	img[x][y] = 2;

	for (int k = 0; k < 4; k++)
	{
		int tx = x + dx[k], ty = y + dy[k];

		if (tx >= 0 && tx < n && ty >= 0 && ty < m && img[tx][ty] == 1)
			ans += search(tx, ty, cnt + 1) - cnt;
	}

	return ans;
}

int main(void)
{
	int t, max = 0, count = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &img[i][j]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (img[i][j] == 1)
			{
				t = search(i, j, 1);
				if (t > max)
					max = t;
				count++;
			}
		}
	}

	printf("%d\n%d\n", count, max);

	return 0;
}
