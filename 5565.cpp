#include <iostream>
using namespace std;

int main(void)
{
	int ans, n;
    cin >> ans;
    
    for(int i = 0; i < 9; i++)
    {
        cin >> n;
        ans -= n;
    }
    
    cout << ans << endl;
    
	return 0;
}
