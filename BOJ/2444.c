#include <stdio.h>

int main(void)
{
    int n, i , j;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j < n - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
     for(i = n - 1; i > 0; i--)
    {
        for(j = 0; j < n - i; j++)
            printf(" ");
        for(j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
