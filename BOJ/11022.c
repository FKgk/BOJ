#include <stdio.h>

int main(void)
{
    int x, a, b;
    
    scanf("%d", &x);
    
    for(int i =1; i <=x; i++)
    {
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);
    }
    
    return 0;
}
