#include <stdio.h>

int main(void)
{
    int E, S, M, i, e = 0, s = 0, m = 0, ans = 0;
    scanf("%d %d %d", &E, &S, &M);
    
    for(i = 0; ; i++)
    {
        e = e % 15 + 1;
        s = s % 28 + 1;
        m = m % 19 + 1;
        ans ++;
        if(e == E && s == S && m == M)
            break;
    }
    printf("%d\n", ans);
    
    return 0;
}
