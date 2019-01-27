#include <stdio.h>

int main(void)
{
    int dp[100000];
    dp[0] =0;
    int n,c;
 
    scanf("%d",&c);
    for(int i =1; i<c+1;i++)
    {
        scanf("%d",&n);
        if( dp[i-1]  > 0 )
        {
            dp[i] = dp[i-1] + n; 
        }
        else
        {
            dp[i] = n;
        }
    }
    int cnt = dp[1];
    for(int i =2; i<c+1; i++)
    {
        if(dp[i]>cnt)
        {
            cnt = dp[i];
        }
    }
    printf("%d \n",cnt);
    
    return 0;
}
