#include <stdio.h>

int main(void)
{
	int n[10002] = { 0, };
    int j;
	n[1] = 1;
	for (int i = 2; i <= 10000; i++)
	{
		if (n[i] == 0)
		{
			j = i+i;
			while (j <= 10000)
			{
				n[j] = 1;
				j += i;
			}
		}
	}
	int m, t;
	scanf("%d %d", &m, &t);
	int ans= 0;
	int sum = 0;
	for (int i = m; i <= t; i++)
	{
		if (n[i] == 0)
		{
			sum += i;
			if (ans == 0)
            {	
                ans = i;
            }
		}
	}
    if(sum>0)
    {
	    printf("%d\n", sum);
      printf("%d", ans);
    }
    else
    {
        printf("-1");
    }
    
    return 0;
}
