#include <stdio.h>

int main(void)
{
    int n,a,b,ans1,ans2;
    scanf("%d %d", &a, &b);
    if(b>a)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    ans2 = a * b;
    n = a % b;
    while(n != 0)
    {
        a = b;
        b = n;
        n = a % b;
    }
    ans1 = b;
    ans2 = ans2 / b;
    printf("%d\n%d",ans1,ans2);
    
    return 0;
}
