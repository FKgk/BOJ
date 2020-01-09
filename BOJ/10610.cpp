#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> v;
    int ans = 0, n;
    while((scanf("%1d", &n)) != EOF)
    {
        v.push_back(n);
        ans += n;
    }
    
    if(ans % 3 == 0)
    {
        sort(v.rbegin(), v.rend());
        
        if(*(v.end() - 1) == 0)
            for(int i = 0; i < v.size(); i++)
                printf("%d",v[i]);
        else
            printf("-1");
    }
    else
    {
        printf("-1");
    }
    
    return 0;
}
