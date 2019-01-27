#include <stdio.h>
#include <stdlib.h>

int compare(const void *n1, const void *n2)
{
	if (*(long long int *)n1 > *(long long int *)n2)
		return 1;
	else if (*(long long int *)n1 < *(long long int *)n2)
		return -1;
	else
		return 0;
}

int main(void)
{
	int n, m, i, j;
	long long int temp, answer = 0;
	scanf("%d %d", &n, &m);
	long long int *num = (long long int *)malloc(sizeof(long long int) * n);
  
	for (i = 0; i< n; i++)
	{
		scanf("%lld", &num[i]);
	}
	qsort(num, n, sizeof(num[0]), compare);

	for (i = 0; i< m; i++)
	{
		temp = num[0] + num[1];
		j = 2;
		while (temp > num[j] && j < n)
		{
			num[j - 2] = num[j];
			j++;
		}
		num[j - 2] = num[j - 1] = temp;
	}

	for (i = 0; i < n; i++)
	{
		answer += num[i];
	}

	printf("%lld\n", answer);

	return 0;
}
