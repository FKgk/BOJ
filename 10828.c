#include <stdio.h>
#include <string.h>

int main(void)
{
    int n,d; // 명령의 수, 정수
    char ch[10]; // 명령어
    int dp[10001]; // 스택
    int cnt = 0; // 스택 순서
    scanf("%d", &n);
    
    for(int i =0; i < n;i++)
    {
       scanf("%s",ch);
       if(!strcmp("push",ch)) // push 명령
       {
           scanf("%d", &d);
           dp[cnt] = d;
           cnt++;
       }
        
       else if(!strcmp("pop",ch))
        {
            if(cnt == 0)
            {
                printf("-1 \n");
            }
            else
            {
                cnt--;
                printf("%d \n", dp[cnt]);
                
            }
        }
        
       else if(!strcmp("size",ch))
        {
            printf("%d \n", cnt);
        }
        
       else if(!strcmp("empty",ch))
        {
            if(cnt == 0)
            {
                printf("1 \n");
            }
            else
            {
                printf("0 \n");
            }
        }
        
        else if(!strcmp("top",ch))
        {
            if(cnt == 0)
            {
                printf("-1 \n");
            }
            else
            {
                printf("%d \n", dp[cnt-1]);
            }
        }
    }

  return 0;
}
