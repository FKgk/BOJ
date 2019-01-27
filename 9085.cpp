#include <iostream>
using std::cin;
using std::cout;
int main(void)
{
    int testcase, N, num, ans;
    cin >> testcase;
    while(testcase--)
    {
        cin >> N;
        ans = 0;
        while(N--)
        {
            cin >> num;
            ans += num;
        }
        cout << ans<<std::endl;
    }
    return 0;
}
