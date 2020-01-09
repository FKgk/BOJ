#include <stdio.h>

int main(void)
{
	int sl = 0, bl = 0, num = 0, space = 0;
	char string;
	
	while (scanf("%c", &string) != EOF)
	{
		
		if (string >= 'a')
			sl++;
		else if (string >= 'A')
			bl++;
		else if (string >= '0')
			num++;
		else if (string == ' ')
			space++;
		else
		{
			printf("%d %d %d %d\n", sl, bl, num, space);
			sl = bl = num = space = 0;
		}
	}
}
