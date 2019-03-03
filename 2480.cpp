#include <iostream>
using namespace std;

int main(void)
{
    int n[3], max = 0;
    for(int i = 0; i < 3; i++)
    {   
        cin >> n[i];
        if(n[i] > max)
            max = n[i];
    }
    
    if(n[0] == n[1] && n[0] == n[2])
        cout << 10000 + n[0] * 1000 << endl;
    else if(n[0] == n[1])
        cout << 1000 + n[0] * 100 << endl;
    else if(n[1] == n[2])
        cout << 1000 + n[1] * 100 << endl;
    else if(n[0] == n[2])
        cout << 1000 + n[0] * 100 << endl;
    else
        cout << max * 100 <<endl;
        
    return 0;
}
