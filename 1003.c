#include <stdio.h>

int main(void)
{
    int t;
    int k[101];
    int fibo0[100] = {1,0,}; // fibo(0)
    int fibo1[100] = {0, 1,}; // fibo(1)
    int max = 0;
    
    scanf("%d",&t);
    
    for(int i =0; i<t; i++)
    {
        scanf("%d", &k[i]);
        if(k[i] > max) max = k[i];
    }
    
    for(int j =2; j<=max;j++)
    {
        fibo0[j] = fibo0[j-1] + fibo0[j-2];
        fibo1[j] = fibo1[j-1] + fibo1[j-2];
    }
    for(int i =0; i<t;i++)
    {
        printf("%d %d\n", fibo0[k[i]], fibo1[k[i]]);
    }
    
    return 0;
}
