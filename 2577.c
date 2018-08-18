#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int n = a*b*c;
    int n1 =0; // n의 자리수 구하기
    int cnt[10];
    for(int i = 0 ; i<10;i++)
    {
        cnt[i] =0;
    }
    for(int i =1000000000;i>=1;)
    {
        if(n/i >0)
        {
            n1 = i;
            break;
        }
        i = i/10;
    }
    for(int i =n1;i>=1;)
    {
        n1 = n/i;
        switch(n1)
        {
            case 0: cnt[0] +=1; break;
            case 1: cnt[1] +=1; break;
            case 2: cnt[2] +=1; break;
            case 3: cnt[3] +=1; break;
            case 4: cnt[4] +=1; break;
            case 5: cnt[5] +=1; break;
            case 6: cnt[6] +=1; break;
            case 7: cnt[7] +=1; break;
            case 8: cnt[8] +=1; break;
            case 9: cnt[9] +=1; break;     
        }
         n = n -(n/i)*i;
        i = i/10;
    }
    
    for(int i =0; i<10;i++)
    {
        printf("%d\n",cnt[i]);
    }
    
    return 0;
}
