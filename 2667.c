#include <stdio.h>

int point[27][27] = { 0, }; // 판
int point_location[627][2]; // 건물이 있는 위치
int xx[] = { 0,0, 1, -1 };
int yy[] = { 1,-1,0,0 };
int ans[320]; // 한 단지안에 건물이 몇개 있는가?
int temp;
/* 함수 설명 : 건물 판, 건물 위치가 주어졌을 때 건물 얼마나 뭉쳐 있는 가?
*/
void cl(int yp, int xp,int value)
{
	for (int k = 0; k < 4; k++)
	{
		if (point[yp + xx[k]][xp + yy[k]] == 1)
		{
			point[yp + xx[k]][xp + yy[k]] = value;
			ans[value]++;
			cl(yp + xx[k], xp + yy[k], value);
		}
	}
}

int main(void)
{

	int t; // t : 가로, 세로길이
	int x, y;
	int cnt = 0;
	int ans_cnt = 1; // 단지 개수

	scanf("%d", &t); // 가로, 세로길이 입력

	for (int i = 1; i <= t; i++) // 건물 위치 입력, 건물있는곳 좌표 구하기
	{
		for (int j = 1; j <= t; j++)
		{
			scanf("%1d", &point[i][j]);
			if (point[i][j] == 1)
			{
				point_location[cnt][0] = i;
				point_location[cnt][1] = j;
				cnt++;
			}
		}
	}
	
	for (int j = 0; j < cnt; j++) // 건물 단지 구하기
	{
		x = point_location[j][1];
		y = point_location[j][0];
		if (point[y][x] == 1)
		{
			ans_cnt++;
			ans[ans_cnt] = 1;
			point[y][x] = ans_cnt;
			cl(y, x, ans_cnt);
		}
	}

	for (int i = 2; i < ans_cnt; i++) // 단지 오름차 순으로 정렬
	{
		for (int j = i+1; j <= ans_cnt; j++)
		{
			if (ans[i] > ans[j])
			{
				temp = ans[i];
				ans[i] = ans[j];
				ans[j] = temp;
			}
		}
	}

	printf("%d\n", ans_cnt-1);  // 답 출력
	for (int i = 2; i <= ans_cnt; i++)
	{ 
		printf("%d\n", ans[i]);
	}
}
