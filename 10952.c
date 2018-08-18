#include <stdio.h>

int main(void)
{
    int a, b;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a || b )
        {
            printf("%d\n",a+b);
        }
        else
            return 0;
    }
    
    return 0;
}
