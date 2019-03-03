#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int sum = 0, min = 1000000000;
    bool check = false; 
    for(int i = 0; i < 7; i++)
    {
        cin >> n;
        if(n % 2)
        {
            check = true;
            sum += n;
            if(min > n)
                min = n;
        }
    }
    if(check)
        cout << sum << endl << min << endl;
    else
        cout << -1 << endl;
        
    return 0;
}
