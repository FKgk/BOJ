#include <stdio.h>

int main(void)
{
    char n[20];
    int t,r,k;
    scanf("%d", &t);
    for(int i =0 ; i<t;i++)
    {
        scanf("%d %s", &r, n);
        k = strlen(n);
        for(int j=0;j<k; j++)
        {
            for(int rk =0; rk< r;rk++)
            {
                printf("%c",n[j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
