#include <iostream>
using namespace std;
int main(void)
{
    int n1, n2, ans = 0, max = 0;
    
    while(cin >> n1)
    {
        cin >> n2;
        ans -= n1;
        ans += n2;
        if(ans > max)
            max = ans;
    }
    
    cout << max << endl;
}
