#include <cstdio>
#include <cstdlib>
#include <algorithm>

int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    int *array = (int *)malloc(sizeof(int) * N);
    
    for(int i = 0; i < N; i++)
        scanf("%d", &array[i]);
    std::sort(&array[0], &array[N]);
    
    printf("%d", array[K-1]);
    
    return 0;
}
