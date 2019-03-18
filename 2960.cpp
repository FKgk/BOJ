#include <iostream>
using namespace std;

bool nums[1002];
int main(void)
{
    int N, K, cnt = 0;
    cin >> N >> K;
    
    for(int i = 2; i <= N; i++)
    {
        for(int j = i; j <= N; j+=i)
        {
            if(!nums[j])
            {
                nums[j] = true;
                cnt++;
                if(K == cnt)
                {
                    cout << j << endl;
                    return 0;
                }
            }
        }
    }
    
    return 0;
}
