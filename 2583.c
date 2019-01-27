#include <stdio.h>

int area[103][103] = { 0, };

int area_sort(int a, int b,int m, int n, int count) //a가 x , b가 y 가로가 n 세로가 m
{
	int cnt = 0;
	if (a + 1 < m && area[a + 1][b] == 0)
	{
		area[a + 1][b] = count;
		int cnt1 = area_sort(a + 1, b, m, n, count);
		cnt += (cnt1 + 1);
	}

	if (a - 1 >= 0 && area[a - 1][b] == 0)
	{
		area[a - 1][b] = count;
		int cnt1 = area_sort(a - 1, b, m, n, count);
		cnt += (cnt1 + 1);
	}

	if (b + 1 < n && area[a][b + 1] == 0)
	{
		area[a][b + 1] = count;
		int cnt1 = area_sort(a, b + 1, m, n, count);
		cnt += (cnt1 + 1);
	}

	if (b - 1 >= 0 && area[a][b - 1] == 0)
	{
		area[a][b - 1] = count;
		int cnt1 = area_sort(a, b - 1, m, n, count);
		cnt += (cnt1 + 1);
	}
	return cnt;

}

void swap(int ansp[100], int a, int b)
{
	int temp = ansp[a];
	ansp[a] = ansp[b];
	ansp[b] = temp;
}

int main(void)
{

	int square[502][2];
	int m,n, k;
	int ans[502];
	int ans_count = 0;
	scanf("%d %d %d", &m, &n, &k);
	//왼쪽 아래가 0,0  오른쪽 위가 n,m 즉 가로가 n 세로가 m
	for (int i = 0; i < k*2; i+=2)
	{
		scanf("%d %d %d %d", &square[i][1], &square[i][0], &square[i + 1][1], &square[i + 1][0]);
	} // x,y좌표 값 입력

	int scnt = 0;
	// 직사각형에 포함되는 범위를 -1로 정의
	for (int i = 0; i < k; i++)
	{
		for (int y = square[scnt][0]; y < square[scnt + 1][0]; y++)
		{
			for (int x = square[scnt][1]; x < square[scnt + 1][1]; x++)
			{
				area[y][x] = -1;
			}
		}
		scnt += 2;
	}

	// 답 구하기
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (area[i][j] == 0)
			{
				ans_count++;
				area[i][j] = ans_count;
				ans[ans_count] = area_sort(i, j, m, n, ans_count) + 1;
				
			}
		}
	}

	// 답 오름차순으로 정렬
	for (int i = 1; i < ans_count; i++)
	{
		for (int j = i + 1; j <= ans_count; j++)
		{
			if (ans[i] > ans[j])
			{
				swap(ans, i, j);
			}
		}
	}

	// 답 출력
	printf("%d\n", ans_count);
	printf("%d", ans[1]);
	for (int i = 2; i <= ans_count; i++)
	{
		printf(" %d", ans[i]);
	}
  
  return 0;
}
