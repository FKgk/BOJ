#include <stdio.h>

int main(void)
{
	char str[10];
	int num[11] = { 0, };
	int i = 0, j;

	scanf("%s", str);

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == '0' + j) 
			{
				num[j] = num[j] + 1;
				break;
			}
		}
		i++;
	}
	num[6] = num[6] + num[9];
	num[6] = num[6] / 2.0 + (num[6] / 2.0 - (int)(num[6] / 2.0));
	int max = num[6];
	for (j = 0; j < 9; j++)
	{
		if (num[j] > max)
			max = num[j];
	}
	printf("%d\n", max);
}
