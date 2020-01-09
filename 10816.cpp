#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int N, i, n;
    vector<int> v;
    
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%d", &n);
        v.push_back(n);    
    }
    
    sort(v.begin(), v.end());
    scanf("%d", &N);
    
    for(i = 0; i < N; i++)
    {
        scanf("%d", &n);
        auto t1 = lower_bound(v.begin(), v.end(), n);
        auto t2 = upper_bound(v.begin(), v.end(), n);

        printf("%d ", t2 - t1 );
    }
    
    return 0;
}
