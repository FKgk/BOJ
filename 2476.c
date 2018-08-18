#include <stdio.h>
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main(void)
{
    int a,b,c,n;
    int answer = 0;
    int dp[101] ;
    scanf("%d", &n);
    for (int i =0; i<n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if( a==b && b==c )
        {
            dp[i] = 10000 + (a *1000);
        }
        else if( a == b || b == c || a == c )
        {
            if ( a == b)
                dp[i] = 1000 + (a*100);
            else
                dp[i] = 1000 + (c*100);
        }
        else
        {
            dp[i] = 100 * (max(a,max(b,c)));
        }
        if(dp[i]>answer)
        {
            answer =dp[i];
        }
    }
    printf("%d",answer);
    
    return 0;
}
