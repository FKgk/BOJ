#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = i; j < n; j++)
			printf(" ");
		if (i != 1)
			printf("*");
		for (j = (i - 1) * 2 - 1; j> 0; j--)
			printf(" ");
		printf("*\n");
	}
  
  return 0;
}
