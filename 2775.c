#include <stdio.h>

int main(void)
{
	int apt[16][16];
	for (int i = 1; i < 15; i++)
	{
		apt[0][i] = i;
	}
	for (int i = 1; i < 15; i++)
	{
		apt[i][1] = 1;
	}

	for (int k = 1; k < 15; k++)
	{
		for (int n = 2; n < 15; n++)
		{
			apt[k][n] = apt[k - 1][n] + apt[k][n - 1];
		}
	}
    
	int t, a, b;
	int ans[100];
	scanf("%d", &t);
	for (int num = 0; num < t; num++)
	{
		scanf("%d %d", &a, &b);
		ans[num] = apt[a][b];
	}
    
	for (int num = 0; num < t; num++)
	{
		printf("%d\n", ans[num]);
	}
  
  return 0;
}
