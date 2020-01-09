#include <stdio.h>

int main(void)
{
    int n,a,g;
    scanf("%d", &n);
    g= n/5;
    a = n%5;
    if(a == 0)
    {
        printf("%d",g);
    }
    else
    {
       while(g>=0)
        {
            
        if(a%3 == 0)
        {
           printf("%d",g+(a/3));
            break;
        }
        else
        {
            g = g-1;
            a = a+5;
        }
        }
        if(g<0) 
        {
            printf("-1");
        }
    }
        
    return 0;
}
