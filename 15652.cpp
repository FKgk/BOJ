#include <cstdio>

int num[9] = { 1, };
void func(int k, const int N, const int M)
{
    if(k == M + 1)
    {
        for(int i = 1; i <= M; i++)
        {
            printf("%d ", num[i]);
        }
        printf("\n");
    }
    else
    {
        for(int i = num[k-1]; i <= N; i++)
        {
            num[k] = i;
            func(k + 1, N, M);
        }
    }
}

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    
    func(1, N, M);
    
    return 0;
}
