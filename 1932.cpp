#include <iostream>
using namespace std;

int tri[502][502];

int maxium(int &n1, int &n2)
{
    return n1 > n2 ? n1 : n2;
}

int main(void)
{
    int n, max = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cin >> tri[i][j];
            tri[i][j] += maxium(tri[i-1][j-1], tri[i-1][j]);
        }
    }
    
    for(int i = 1; i <= n; i++)
        if (tri[n][i] > max)
            max = tri[n][i];
    
    cout << max << endl;
    
    return 0;
}
