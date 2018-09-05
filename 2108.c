#include <stdio.h>
#include <stdlib.h>

int compare(const void *n1, const void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return 1;
	else if (*(int *)n1 < *(int *)n2)
		return -1;
	return 0;
}

int main(void)
{
	int N, sum = 0;
	int max_count = 0,count = 1, cnt = 0;
	int ans_max, ans_area, ans_middle;
	double ans_q;

	scanf("%d", &N);
	int * num = (int *)malloc(sizeof(int) * (1 + N));
	num[N] = 4001;
	int * number = (int *)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
	}

	qsort(num, N, sizeof(int), compare);
	
	
	for (int i = 0; i < N ; i++)
	{
		if (num[i] == num[i + 1])
			count++;
		else
		{
			if (max_count < count)
			{
				max_count = count;
				number[0] = num[i];
				cnt = 1;
			}
			else if (max_count == count)
			{
				number[cnt] = num[i];
				cnt++;
			}
			count = 1;
		}
	}

	qsort(number, cnt, sizeof(int), compare);

	ans_q = (double)sum / N;
	ans_middle = num[(int)(N / 2)];
	ans_max = (cnt == 1) ? number[0] : number[1];
	ans_area = num[N - 1] - num[0];

	printf("%.0lf\n", ans_q);
	printf("%d\n", ans_middle);
	printf("%d\n", ans_max);
	printf("%d\n", ans_area );

	return 0;
}
