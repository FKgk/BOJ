#include <stdio.h>

int point[102][102] = { 0, }; // 길의 모양
int ans[10000][2] = { 0, };
int cnt = 0;
int cnt2 = 1;
int score = 2;
void p(int i, int j)
{
	if (point[i + 1][j] == 1)
	{
		point[i + 1][j] = score;
		ans[cnt2][0] = i + 1;
		ans[cnt2][1] = j;
		cnt2++;
	}

	if (point[i - 1][j] == 1)
	{
		point[i - 1][j] = score;
		ans[cnt2][0] = i - 1;
		ans[cnt2][1] = j;
		cnt2++;
	}

	if (point[i][j + 1] == 1)
	{
		point[i][j + 1] = score;
		ans[cnt2][0] = i;
		ans[cnt2][1] = j + 1;
		cnt2++;
	}

	if (point[i][j - 1] == 1)
	{
		point[i][j - 1] = score;
		ans[cnt2][0] = i;
		ans[cnt2][1] = j - 1;
		cnt2++;
	}
}

int main(void)
{

	int m, n;

	scanf("%d %d", &m, &n); // 세로 가로

	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			scanf("%1d", &point[i][j]);
		}
	}

	ans[cnt][0] = 1;
	ans[cnt][1] = 1;
	int cnt_1 = cnt;
	int temp = cnt2;
	while (point[m][n] == 1)
	{
		cnt_1 = cnt;
		cnt = cnt2;
		temp = cnt2;
		for (int k = cnt_1; k < temp; k++)
		{
			p(ans[k][0], ans[k][1]); // 첫번째, 두번째, 세번째,
		}
		score++;
	}
	
	printf("%d", point[m][n]);

  return 0;
}
