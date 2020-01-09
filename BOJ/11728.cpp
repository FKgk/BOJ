#include <cstdio>
#include <vector>
using namespace std;
vector<int> v1, v2, v;

int main(void)
{
    int N, M, n, i = 0, j = 0;
    scanf("%d %d", &N, &M);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &n);
        v1.push_back(n);
    }
    
    for(int i = 0; i < M; i++)
    {
        scanf("%d", &n);
        v2.push_back(n);
    }
    
    i = j = 0;
    
    while(i < N && j < M)
    {
        if(v1[i] < v2[j])
        {
            v.push_back(v1[i]);
            i++;
        }
        else
        {
            v.push_back(v2[j]);
            j++;
        }
    }
    
    while(i < N){
        v.push_back(v1[i]);
        i++;
    }
    while(j < M){
        v.push_back(v2[j]);
        j++;
    }
    printf("%d", v[0]);
    for(int i = 1; i < v.size(); i++){
        printf(" %d", v[i]);
    }
    return 0;
}
