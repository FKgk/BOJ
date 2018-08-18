#include <stdio.h>

int main(void)
{
	int x, i = 1, n1, n2;
	int n = 0;
	scanf("%d", &x);
		while (1)
		{
			n = (i *(i + 1)) / 2;
			if (x > n)
			{
				i++;
			}
			else
			{
				i--;
				n = (i *(i + 1)) / 2;
				break;
			}
		}
		if (i % 2 == 0)
		{
			n1 = i + 2 , n2 = 0;
			n = x - n;
			n1 = n1 - n;
			n2 = n2 + n;
		}
		else
		{
			n1 = i + 2, n2 = 0;
			n = i+2-x + n;
			n1 = n1 - n;
			n2 = n2 + n;
		}
		printf("%d/%d\n", n1, n2);

	
	return 0;
}
