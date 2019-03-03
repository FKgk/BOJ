#include <iostream>
using namespace std;

int main(void)
{
    int n[20], t, Y = 0, M = 0;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n[i];
        Y += ((int)(n[i] / 30) + 1) * 10;
        M += ((int)(n[i] / 60) + 1) * 15;
    }
    
    if( Y < M)
        cout << "Y " << Y<<endl;
    else if (M < Y)
        cout << "M " << M <<endl;
    else
        cout << "Y M " << Y << endl;
        
    return 0;
}
