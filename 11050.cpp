#include <iostream>
using namespace std;

int func(int n, int k)
{
    if(n == k || k == 0)
        return 1;
    return func(n - 1, k) + func(n - 1, k - 1);
}

int main(void)
{
    int N, K;
    cin >> N >> K;
    
    cout << func(N, K) << endl;
    
    return 0;
}
