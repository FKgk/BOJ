#include <stdio.h>

int cabbage[52][52] ; // 배추가 있는 농지
int cabbage_location[2502][2]; // 배추가 있는 위치
int xx[] = { 0,0, 1, -1 };
int yy[] = { 1,-1,0,0 };


/* 함수 설명 : 배추 판, 배추 위치가 주어졌을 때 배추가 얼마나 뭉쳐 있는 가?
*/
void cl(int yp, int xp)
{
	for (int k = 0; k < 4; k++)
	{
		if (cabbage[yp + xx[k]][xp + yy[k]] == 1)
		{
			cabbage[yp + xx[k]][xp + yy[k]] = 2;
			cl(yp + xx[k], xp + yy[k]);
		}
	}
}
void cabbageSort(int n, int m)
{
	n+=2;
	m+=2;
	for (int o = 0; o < n; o++)
	{
		for (int p = 0; p < m; p++)
		{
			cabbage[o][p] = 0;
		}
	}
}

int main(void)
{

	int n, m, t; //  n이 세로길이, m은 가로길이 t : 테스트 케이스
	int x, y;
	int cabbage_count; // 배추 개수

	int ans[100];

	scanf("%d", &t); // 테스트 케이스 입력
	
	for (int i = 0; i < t; i++) // 테스트 케이스만큼 반복 실행
	{
		ans[i] = 0; // 답 0으로 초기화
		scanf("%d %d %d",&m, &n, &cabbage_count); // 가로,세로 길이, 배추 개수 입력
		void cabbageSort(n, m);
		for (int j = 0; j < cabbage_count; j++) // 배추 위치 입력
		{
			scanf("%d %d", &cabbage_location[j][1], &cabbage_location[j][0]); // 첫번째 입력값이 가로 두번쨰가 세로
			cabbage[cabbage_location[j][0]+1][cabbage_location[j][1]+1] = 1;
		}
		for (int j = 0; j < cabbage_count; j++) // 배추 위치 입력
		{
			x = cabbage_location[j][1]+1;
			y = cabbage_location[j][0]+1;
			if (cabbage[y][x] == 1)
			{
				cabbage[y][x] = 3;
				cl(y, x);
				ans[i]++;
			}
		}
	}
	for (int i = 0; i < t; i++)
	{
		printf("%d\n", ans[i]);
	}
  
  return 0;
}
