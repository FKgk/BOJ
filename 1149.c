#include <stdio.h>

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(void)
{
	int c,answer[3];
	int n[1001][3];
	scanf("%d", &c);
	
	for (int i = 0; i < c; i++)
	{
		scanf("%d %d %d", &n[i][0], &n[i][1], &n[i][2]);
	}
	for (int i = 1; i < c; i++)
	{
		n[i][0] = min(n[i - 1][1], n[i - 1][2]) + n[i][0];
		n[i][1] = min(n[i - 1][0], n[i - 1][2]) + n[i][1];
		n[i][2] = min(n[i - 1][0], n[i - 1][1]) + n[i][2];
	}
	printf("%d\n", min(n[c-1][0], min(n[c-1][1], n[c-1][2])));
  
  return 0;
}
