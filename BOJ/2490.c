#include <stdio.h>

int main(void)
{
    int n[4];
    int cnt = 0;
    for(int i =0; i<3; i++)
    {
        for(int j = 0; j <4; j++)
        {
            scanf("%d", &n[j]);
            if(n[j] == 0)
                cnt++;
        }
        switch (cnt)
        {
            case 0 :
                printf("E\n");
                break;
            case 1 :
                printf("A\n");
                break;
            case 2 :
                printf("B\n");
                break;
            case 3 :
                printf("C\n");
                break;
            case 4 :
                printf("D\n");
                break;
        }
    cnt=0;
    }
    
    
    return 0;
}
