#include <cstdio>
#include <algorithm>
using namespace std;

int num[1000001];

int main(void)
{
    int n, i;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);
    
    sort(num, num + n);
    
    for(i = 0; i < n; i++)
        printf("%d\n", num[i]);
    
    return 0;
}
