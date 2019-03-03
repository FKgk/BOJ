#include <iostream>
using namespace std;

int n[2][1000] = { 0, };

int main(void)
{
    int N, K, s, g, ans = 0;
    cin >> N >> K;
    for(int i = 0;i < N; i++)
    {
         cin >> s >> g;
         n[s][g]++;
    }
    
    
    for(int i = 1; i <= 6; i++)
        for(int j = 0; j < 2; j++)
            if(n[j][i] != 0)
                ans += (int)((n[j][i] - 1) / K) + 1;
    
    cout << ans << endl;
    
    return 0;
}
