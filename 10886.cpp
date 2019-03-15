#include <iostream>
using namespace std;

int main(void)
{
	int N, num, ans = 0;
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        cin >> num;
        if (num)
            ans += 1;
        else
            ans -= 1;
    }
    
    if(ans > 0)
        cout << "Junhee is cute!" << endl;
    else
        cout << "Junhee is not cute!" << endl;
    
	return 0;
}
