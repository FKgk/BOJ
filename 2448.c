#include <stdio.h>

int star[3074][6145] = {0, };
int k;
void st_pt(int a, int b);
void star_point(int h ,int a, int b)// h 는 높이 a가 y좌표 b가 x좌표
{
	if (h >= 3)
	{
			st_pt(a, b);
			star_point(h / 2, a, b);
			star_point(h / 2, a + h / 2, b + h / 2);
			star_point(h / 2, a + h / 2, b - h / 2);
	}
}

void st_pt(int a , int b) // a가 y좌표 b가 x좌표
{
	star[a][b] = 1;
	star[a + 1][b - 1] = 1;
	star[a + 1][b + 1] = 1;
	for (int i = -2; i < 3; i++)
	{
		star[a + 2][b + i] = 1;
	}
}




int main(void)
{
	scanf("%d", &k); // 첫번째 별의 위치 k, k
	int k2 = 2 * k;
	star_point(k, 1, k);
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1 ; j <= k2 ; j++)
		{
			if (star[i][j] == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
  
  return 0;
}
