#include <stdio.h>

int max(int a, int b)
{
    if(a>b) 
        return a;
    return b;
}

int main(void)
{
    int n, sum, ans[3];
    while(1)
    {
        scanf("%d %d %d", &ans[0], &ans[1], &ans[2]);
        if(ans[0] == 0 && ans[1] == 0 && ans[2] == 0)
            break;
        n = max( max(ans[0], ans[1]) , ans[2]);
        sum = 0;
        for(int i = 0; i < 3; i++)
           sum += ans[i]*ans[i];
        if(sum == n*n *2)
            printf("right\n");
        else
            printf("wrong\n");
    }
    
    return 0;
}
