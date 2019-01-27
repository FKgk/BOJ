#include <stdio.h>

int main(void)
{
    int n,a,b;
    int ans[1000000];
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    {
        scanf("%d %d", &a, &b);
        ans[i] = a + b;
    }
     for(int i =0;i<n;i++)
    {
       printf("%d\n",ans[i]);
    }
    
    return 0;
}
