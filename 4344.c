#include <stdio.h>

int main(void)
{
    int n,m,x;
    double f[100];
    int  a[1001];
    scanf("%d",&m);
    for(int i =0; i < m;i++)
    {
        double temp =0;
        double answer=0;
        
        scanf("%d",&n);
        
        for(x =0; x < n; x++)
        {
            scanf("%d", &a[x]);
            temp = temp + a[x];
        }
        temp = temp / n;
        for(int k =0; k < n;k++)
        {
           if(a[k] > temp)
           {
               answer++;
           }
        }
        f[i] = (answer * 100) / n;
    }
     for(int i =0; i<m;i++)
     {
         printf("%.3f%%\n", f[i]);
     }
    
    return 0;
}
