#include <stdio.h>

int main(void)
{
    int a,b,x;
    char c;
    
    scanf("%d",&x);
    
    for(int i =0; i< x; i++)
    {
      scanf("%d %c %d",&a,&c,&b);
      printf("%d\n", a+b);
    }
    
    return 0;
}
