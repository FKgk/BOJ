#include <stdio.h>
#include <stdlib.h>

int safe_area[110][110];
int visited[110][110];
int length;
int cnt = 0;
int k;
void safe(int i, int j)
{
	
	if (i - 1 >= 0 && (safe_area[i - 1][j] >= k && visited[i - 1][j] == cnt))
	{
		visited[i - 1][j] = cnt + 1;
		safe(i - 1, j);
	}
	if (i + 1 < length && (safe_area[i + 1][j] >= k && visited[i + 1][j] == cnt))
	{
		visited[i + 1][j] = cnt + 1;
		safe(i + 1, j);
	}
	if (j - 1 >= 0 && (safe_area[i][j - 1] >= k && visited[i][j - 1] == cnt))
	{
		visited[i][j - 1] = cnt + 1;
		safe(i, j - 1);
	}
	if (j + 1 < length && (safe_area[i][j + 1] >= k && visited[i][j + 1] == cnt))
	{
		visited[i][j + 1] = cnt + 1;
		safe(i, j + 1);
	}
}

int main(void)
{
	int ans = 1;
	int sub_ans = 0;

	scanf("%d", &length);

	for (int i = 0; i< length; i++) // 영역 높이 입력받기
	{
		for (int j = 0; j<length; j++)
		{
			scanf("%d", &safe_area[i][j]);
		}
	}

	for (int i = 0; i< length; i++) // 영역 높이 입력받기
	{
		for (int j = 0; j<length; j++)
		{
			visited[i][j] = cnt;
		}
	}

	for (k = 2; k < 101; k++) // 높이가 k 일때 영역 구하기
	{
		for (int y = 0; y < length; y++)
		{
			for (int x = 0; x < length; x++)
			{
				if (safe_area[y][x] >= k && visited[y][x] == cnt) // 높이가 k이상인 건물들의 한 영역 구하기
				{
					visited[y][x] = cnt + 1;
					safe(y, x);
					sub_ans++;
				}
			}
		}

		if (sub_ans >= ans)
		{
			ans = sub_ans;
		}
        else if(sub_ans == 0) 
        {
            break;
        }
		sub_ans = 0;
		cnt++;
	}
	printf("%d\n", ans);
  
  return 0;
}
