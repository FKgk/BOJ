#include <stdio.h>

int main(void)
{
	int n, i, j;
	int val = 1;
	scanf("%d", &n);
	for (i = 1; i > 0; i+=val)
	{
		for (j = i; j < n; j++)
			printf(" ");
		for (j = i; j > 0; j--)
			printf("*");
		printf("\n");
		if (i == n)
			val = -1;
	}

	return 0;
}
