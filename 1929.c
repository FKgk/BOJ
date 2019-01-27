#include <stdio.h>
#include <math.h>

int main(void)
{
	int m,n,c;
	double k;
    int cnt =0;
	scanf("%d %d", &m,&n);
    if(m == 1)
    {
        m +=1;
    }
	for (int i = m; i <= n; i++)
	{
		k = sqrt((double)i);
    c = (int)k;
		for (int j = 2; j <= c;j++)
		{
			if (i % j == 0)
			{
        cnt = 1;
				break;
			}
		}
        if( cnt == 0)
        {
            printf("%d \n", i);
        }
        else
        {
            cnt=0;
        }
	}
  
  return 0;
}
