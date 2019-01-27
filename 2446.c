#include <stdio.h>

int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    
    for(i = n; i > 0; i--)
    {
        for(j = n; j > i; j --)
            printf(" ");
        for(j = 0; j < i * 2 - 1; j++)
            printf("*");
        printf("\n");
    }
    
    for(i = 2; i <= n; i++)
    {
        for(j = n; j > i; j--)
            printf(" ");
        for(j = 0; j < i * 2 - 1; j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}
