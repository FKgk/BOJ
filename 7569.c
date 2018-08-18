#include <stdio.h>
int main(void)
{
	int ans1 = 0; // 토마토 없는 구멍의 개수
    int ans =0;
	int x, y, z;
	int answer;
	int m, n, h; // m 가로 , n, 세로,  h 높이
	int cnt = 0; // 익은 토마토 개수
	int ***tomato;

	scanf("%d %d %d", &m, &n, &h);


	tomato = (int ***)malloc(sizeof(int **)* h);
	for (int i = 0; i < h; i++)
	{
		tomato[i] = (int **)malloc(sizeof(int *) * n);
	}
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tomato[i][j] = (int *)malloc(sizeof(int) * m);
		}
	}
    int **point = (int **)malloc(sizeof(int *) *m*n*h);
	for (int i = 0; i < m*n*h; i++)
	{
		point[i] = (int *)malloc(sizeof(int) * 3);
	}

    
	for (int z = 0; z < h; z++) // z       토마토 입력받기
	{
		for (int y = 0; y < n; y++) // y
		{
			for (int x = 0; x < m; x++) // x
			{
				scanf("%d", &tomato[z][y][x]);
				if (tomato[z][y][x] == 1)
				{
					point[cnt][0] = z; 
					point[cnt][1] = y; 
					point[cnt][2] = x;
					cnt++; // 익은 토마토 개수 세기
				}
				else if (tomato[z][y][x] == -1)
				{
					ans1++; // 빈공간 세기
				}
			}
		}
	}
		for (int k = 0; k < cnt; k++) // 토마토 익게 하기
		{
			z = point[k][0]; // x
			y = point[k][1]; // y
			x = point[k][2];
			if (z - 1 >= 0 && tomato[z - 1][y][x] == 0)
			{
				tomato[z - 1][y][x] = tomato[z][y][x] + 1;
				point[cnt][0] = z - 1;
				point[cnt][1] = y;
				point[cnt][2] = x;
				cnt++;
			}
			if (z + 1 < h && tomato[z + 1][y][x] == 0)
			{
				tomato[z + 1][y][x] = tomato[z][y][x] + 1;
				point[cnt][0] = z + 1;
				point[cnt][1] = y;
				point[cnt][2] = x;
				cnt++;
			}
			if (x - 1 >= 0 && tomato[z][y][x - 1] == 0)
			{
				tomato[z][y][x - 1] = tomato[z][y][x] + 1;
				point[cnt][0] = z;
				point[cnt][1] = y;
				point[cnt][2] = x - 1;
				cnt++;
			}
			if (x + 1 < m && tomato[z][y][x + 1] == 0)
			{
				tomato[z][y][x + 1] = tomato[z][y][x] + 1;
				point[cnt][0] = z;
				point[cnt][1] = y;
				point[cnt][2] = x + 1;
				cnt++;
			}
			if (y - 1 >= 0 && tomato[z][y - 1][x] == 0)
			{
				tomato[z][y - 1][x] = tomato[z][y][x] + 1;
				point[cnt][0] = z;
				point[cnt][1] = y - 1;
				point[cnt][2] = x;
				cnt++;
			}
			if (y + 1 < n && tomato[z][y + 1][x] == 0)
			{
				tomato[z][y + 1][x] = tomato[z][y][x] + 1;
				point[cnt][0] = z;
				point[cnt][1] = y + 1;
				point[cnt][2] = x;
				cnt++;
			}
            if (ans < tomato[z][y][x]) ans = tomato[z][y][x];
		}
    
		answer = (m * n * h); // 여기 부터 답 출력을 위한 거
		if (answer == (ans1 + cnt) ) // 익은 토마토와 빈공간이 전체 공간 개수와 같을 때
		{
			printf("%d", ans - 1);
		}
		else // 다를 때 익지 못한 토마토가 있다.
		{
			printf("-1");
		}
}
