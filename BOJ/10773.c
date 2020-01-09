#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    scanf("%d", &n);
    int *num = (int *)malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if(num[i] == 0)
        {
            i -=2;
            n -=2;
        }
    }
    
    for(i = 0; i < n; i++)
    {
        sum += num[i];
    }
    printf("%d\n", sum);
    
    return 0;
}
