#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int n1 = 0;
    int n2 = 1; // 1번 째
    int temp = n;
    
    for(int i = 1; i < n; i++)
    {
        temp = n1 + n2; // 1 2 3 5
        n1 = n2; // 1 1 2 3
        n2 = temp; // 1 2 3 5
    }
    
    if(n == 0)
        printf("0\n");
    else
        printf("%d\n",n2);
        
    return 0;
}
