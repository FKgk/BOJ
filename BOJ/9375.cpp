#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        map<string, int> m;
        int N, ans = 1;
        cin >> N;
        
        while(N--)
        {
            cin >> s1 >> s2;
            m[s2]++;
        }
        
        for(auto iter = m.begin(); iter != m.end(); iter++)
        {
            ans *= (iter->second + 1);
        }
        
        cout << ans - 1 << endl;
    }
 
    return 0;
}
