#include <stdio.h>

int main()
{
	int tomato[1002][1002]; // 토마토 상자
	int point[1000001][2] = { 0, }; // 익은 토마토 위치
	int m,n; // 세로 가로
	int cnt = 0; // 익은 토마토 개수
	int xp[] = { 1, -1, 0, 0 };
	int yp[] = { 0, 0, 1, -1 };
	int ans1 = 0; // 토마토 없는 구멍의 개수
	int ans; // 초기 익은 토마토개수
	int x, y;
	int answer;

	scanf("%d %d", &m, &n); // m = x , n = y

	for (int i = 1; i <= n; i++) // y
	{
		for (int j = 1; j <= m; j++) // x
		{
			scanf("%d", &tomato[i][j]);
			if (tomato[i][j] == 1)
			{
				point[cnt][0] = j; // x
				point[cnt][1] = i; // y
				cnt++; // 익은 토마토 개수 세기
			}
			else if (tomato[i][j] == -1 )
			{
				ans1++; // 빈공간 세기
			}
		}
	}

	ans = cnt; // 처음 익은 토마토 개수

	for (int k = 0; k < cnt; k++)
	{
		for (int l = 0; l < 4; l++)
		{
			x = point[k][0] + xp[l];
			y = point[k][1] + yp[l];

			if ((y > 0 && y <= n) && (x > 0 && x <= m))
			{
				if (tomato[y][x] == 0)
				{
					tomato[y][x] = tomato[point[k][1]][point[k][0]] + 1;
					point[cnt][0] = x;
					point[cnt][1] = y;
					cnt++;
				}
			}
		}
	}
  answer = ( m * n );

	if ( answer == ( ans1 + cnt ) ) // 익은 토마토와 빈공간이 전체 공간 개수와 같을 때
	{
		printf("%d", tomato[point[cnt - 1][1]][point[cnt - 1][0]] - 1);
	}
	else // 다를 때 익지 못한 토마토가 있다.
	{
			printf("-1");
	}
}
