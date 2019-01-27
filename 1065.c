#include <stdio.h>

int main(void)
{
    int n,a,b,c;
    int cnt = 99;
    scanf("%d",&n);
    if(n<100) // 1부터 99는 등차수열
    {
        printf("%d",n);
    }
    else
    {
    for(int i =100; i<=n;i++)
    {
        a = i /100; // 백의 자리 구하기
        c =  i % 10; // 일의 자리 구하기
        b = ( (i % 100) - c ) / 10; // 십의 자리 구하기
       if( (a-b) == (b-c) )
       {
           cnt++;
       }
    }
        printf("%d", cnt);
    }
    
    return 0;
}
