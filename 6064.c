#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, x, n, y, t, cnt, a, b;
	scanf("%d", &t);
	int *ans = (int *)malloc(sizeof(int) * t);
	for (int i = 0; i < t; i++)
	{
		cnt = 1;
		scanf("%d %d %d %d", &m, &n, &x, &y);
		if (m > n)
			a = m, b = n;
		else
			a = n, b = m;
		while (cnt != 0)
		{
			cnt = a%b;
			a = b;
			b = cnt;
		}
		cnt = (m*n)/a;

		while (x != y && x <= cnt)
		{
			if (x < y) x = x + m;
			else y = y + n;
		}

		if (x!=y || x > cnt)
			ans[i] = -1;
		else
			ans[i] = x;
	}
	for (int i = 0; i < t; i++)
		printf("%d\n", ans[i]);
    
	return 0;
}
