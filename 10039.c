#include <stdio.h>

int main(void)
{
    int n[5];
    int cnt =0;
    for(int i =0;i<5; i++)
    {
        scanf("%d",&n[i]);
        if(n[i] <40)
        {
            n[i] = 40;
        }
        cnt = cnt + n[i];
    }
    printf("%d",cnt/5);
    
    return 0;
}
