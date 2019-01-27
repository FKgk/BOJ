#include <stdio.h>

int main(void)
{
    long long int dp[92];
    dp[0] = 0;
    dp[1] = 1;
    int n;
    scanf("%d", &n);
    for(int i =2; i <= n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    printf("%lld", dp[n]);
    
    return 0;
}
