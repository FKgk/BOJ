#include <stdio.h>
int main(void)
{
    int n, num, max = -1000000, min = 1000000;
    scanf("%d", &n);
    for(int i =0 ; i < n; i++)
    {
        scanf("%d", &num);
        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }
    printf("%d %d", min, max);
    
    return 0;
}
