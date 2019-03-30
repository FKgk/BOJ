#include <iostream>
#include <algorithm>
using namespace std;

int num[100001];

int main(void)
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> num[i];
    
    sort(num, num + n);
    
    cout << num[0] << " ";
    for(int i = 1; i < n; i++)
        if(num[i-1] != num[i])
            cout << num[i] << " ";
    
    return 0;
}
