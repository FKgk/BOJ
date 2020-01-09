#include <stdio.h>
#include <stdlib.h>

int compare(const void *n1, const void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return -1;
	if (*(int *)n1 < *(int *)n2)
		return 1;
	return 0;
}

int main(void)
{
	int n, j, n1, ans = 0;
	int num[30] = { 0, };
	scanf("%d", &n);
	char **array = (char **)malloc(sizeof(char *) * n);
	
	for (int i = 0; i <  n; i++)
	{
		array[i] = (char *)malloc(sizeof(char) * n);
		scanf("%s", array[i]);
		j = 0;
		while (array[i][j] != '\0')
			j++;
		n1 = 1;
		while (j != -1)
		{
			j--;
			num[array[i][j] - 'A'] += n1;
			n1 *= 10;
		}
	}
	qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);

	for (int i = 0; i < 10; i++)
		ans += (9 - i) * num[i];

	printf("%d\n",ans);

	return 0;
}
