#include <stdio.h>

int main(void)
{
    int h,m,c,n;

    scanf("%d %d %d",&h,&m,&c);
    scanf("%d",&n);
    
    h = h+ (n/3600);
    n %= 3600;
    m = m + (n/60);
    n %= 60;
    c = c + n;
  
    while(c>= 60)
    {
        c= c-60;
        m++;
    }
    while(m>=60)
    {
        m= m- 60;
        h++;
    }
      while(h>=24)
      {
         h = h -24;
      }
    printf("%d %d %d \n",h,m,c);
    
    return 0;
}
