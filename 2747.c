#include <stdio.h>

int main(void)
{
    int dp[47] ={1,1,1};
    int n ;
    scanf("%d", &n);
    for(int i =3; i<=n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    printf("%d",dp[n]);
    
    return 0;
}
