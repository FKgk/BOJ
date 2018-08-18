#include <stdio.h>

int main(void)
{
    int n;
    int answer =0;
    char ch;
        scanf("%d",&n);
       
    for(int i =0;i<=n;i++)
    {
        ch = getchar()-48;
        answer = answer + (int)ch;
    }
    printf("%d",answer+38);
    
    return 0;
}
