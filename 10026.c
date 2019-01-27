#include <stdio.h>
#include <stdlib.h>
int n;
int **visit;
const int xp[4] = { 1, -1, 0, 0 };
const int yp[4] = {0, 0, 1, -1};

void search(char **map, int a, int b)
{
	visit[a][b] += 1;
	int ta, tb;
	for (int i = 0; i< 4; i++)
	{
		ta = a + xp[i];
		tb = b + yp[i];
		if (ta >= 0 && ta < n && tb >= 0 && tb < n)
		{
			if (map[ta][tb] == map[a][b] && visit[ta][tb] == 0)
			{
				search(map, ta, tb);
			}
		}
	}
}
void search2(char **map, int a, int b)
{
	visit[a][b] += 1;
	int ta, tb;

	for (int i = 0; i < 4; i++)
	{
		ta = a + xp[i];
		tb = b + yp[i];
		if ( (ta >= 0 && ta < n) && (tb >= 0 && tb < n) )
		{
			if (map[ta][tb] == 'G')
				map[ta][tb] = 'R';
			if (map[ta][tb] == map[a][b] && visit[ta][tb] == 1)
			{
				search2(map, ta, tb);
			}
		}
	}
}
int main(void)
{
	int ans[2] = { 0,0 };
	char a;
	scanf("%d", &n);
	char **map = (char **)malloc(sizeof(char **) * n);
	visit = (int **)malloc(sizeof(int **) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%c", &a);
		map[i] = (char *)malloc(sizeof(char) * n);
		visit[i] = (int *)malloc(sizeof(int) * n);
		for (int j = 0; j < n; j++)
		{
			scanf("%c", &map[i][j]);
			visit[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (visit[i][j] == 0)
			{
				search(map, i, j);
				ans[0]++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 'G')
				map[i][j] = 'R';
			if (visit[i][j] == 1)
			{
				ans[1]++;
				search2(map, i, j);
			}
		}
	}

	printf("%d %d\n", ans[0], ans[1]);

	return 0;
}
