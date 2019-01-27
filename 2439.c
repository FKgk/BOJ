#include <stdio.h>

int main(void)
{
    int p,i,j,n;
    scanf("%d",&n);
    for(p=n;p>0;p--)
    {
      for(i = p-1;i>0;i--)
          {
          printf(" ");
          }
      for(j =n-p+1;j>0;j-- )
          {
          printf("*");
          }
        printf("\n");
    }
    
    return 0;
}
