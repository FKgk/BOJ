#include <iostream>
using namespace std;
int main(void)
{
    int T, n, m;
    cin >> T;
    while( T--)
    {
        cin >> n >> m;
        int t = m * 2 - n;
        cout << t << " " << m - t << endl;
    }
}
