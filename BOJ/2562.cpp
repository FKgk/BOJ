#include <iostream>
using namespace std;

int main(void)
{
    int n[10];
    int max = 0;
    
    for(int i = 1; i < 10; i++)
    {
         cin >> n[i];
         if(n[i] > n[max])
            max = i;
    }
    cout << n[max] << endl << max << endl;
    
    return 0;
}
