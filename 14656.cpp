#include <iostream>
using namespace std;
int main(void)
{
    int n, m, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        if(i + 1 != m)
            ans++;
    }
    cout << ans << endl;
}
