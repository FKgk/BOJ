#include <stdio.h>

int main(void)
{
    int n;
    
    int num[51];
    scanf("%d", &n);
    scanf("%d", &num[0]);
    int max = num[0];
    int min = num[0];
    for(int i =1; i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]>max) max = num[i];
        else if(num[i] < min) min = num[i];
    }
    long long int ans = max * min;
    
    printf("%lld", ans);
    
    return 0;
}
