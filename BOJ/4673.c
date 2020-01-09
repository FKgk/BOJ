#include <stdio.h>

int main(void)
{
    int dp[10102] = {0};
    int n;
    int ans = 0;
    
    for(int i =1; i<=10000;i++)
    {
        n = i;
        ans = n;
        while(n > 0)
        {
            ans = ans + n%10;
            n = n/10;
        }
        dp[ans] = 1;
    }
    for(int i =1; i <= 10000;i++)
    {
        if(dp[i] == 0)
        {
            printf("%d \n",i);
        }
    }
    
    return 0;
}
