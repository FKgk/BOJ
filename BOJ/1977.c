#include <stdio.h>
#include <math.h>

int main(void)
{
    int M, N, min,sum = 0;
    scanf("%d %d", &M, &N);
    double m = ceil(sqrt((double)M)), n = sqrt((double)N);
    
    if(m * m <= N)
        min = (int)(m * m);
    
    for(int i = (int)m; i <= (int)n; i++)
        sum = sum + i * i;
    
    if(sum == 0)
        printf("-1\n");
    else
       printf("%d\n%d\n", sum, min);
    
    return 0;
}
