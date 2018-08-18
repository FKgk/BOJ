#include <stdio.h>

void sw(int * a,int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int t,a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    if (b>a )
    {  
        sw(&a,&b);        
    }
    if (c>a )
    {  
        sw(&a,&c);
    }
    if (c>b)
    {  
        sw(&b,&c);
    }
    printf("%d", b);
    
    return 0;
}
