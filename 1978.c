#include <stdio.h>
#include <math.h>

int main(void)
{
	int t,n,c;
	double k;
	scanf("%d", &t);
    int cnt = t;
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
        if (n == 1)
		{
			cnt--;
			continue;
		}
		k = sqrt((double)n);
        c = (int)k;
		for (int i = 2; i <= k; i++)
		{
			if (n % i == 0)
			{
				cnt--;
				break;
			}
		}
	}
	printf("%d", cnt);
  
  return 0;
}
