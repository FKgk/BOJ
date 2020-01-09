#include <stdio.h>
#include <math.h>

int main(void)
{
    int x,y,t, x1, x2, y1, y2, r1, r2;
    double d,r;
	int answer[10000];
	scanf("%d", &t);
	for (int i = 0; i<t; i++)
	{
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		if (x1 < x2)
        {
            x = x1;
            x1 = x2;
            x2= x;
        }
        x = x1 - x2;
        if (y1 < y2)
        {	
            y = y1;
            y1 = y2;
            y2 = y;
        }
        y = y1 - y2;
        if(r1<r2)
        {
            r = (double)r1;
            r1 =r2;
            r2 = (int)r;
        }
        	r =(double) r1 +(double) r2;
		d = pow((double)x,2) + pow((double)y,2);
        d = sqrt(d);
        
		 if (x1 == x2 && y1 == y2)
	  {
		  if (r1 == r2)
		  {
			  answer[i] = -1;
		  }
		  else
		  {
			  answer[i] = 0;
		  }
	  }
	  else
	  {
		  if ((r1 - r2) < d && d < r)
		  {
			  answer[i] = 2;
		  }
		  else if ((r1 - r2) == d || d == r)
		  {
			  answer[i] = 1;
		  }
		  else
		  {
			  answer[i] = 0;
		  }
	  }
        
	}
	for (int i = 0; i<t; i++)
	{
		printf("%d\n", answer[i]);
	}
  
  return 0;
}
