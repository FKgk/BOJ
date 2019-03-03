#include <iostream>
using namespace std;
int n[21];

void func(int n1, int n2)
{
    int t[20];
    int temp = n1;
    for(int i = n2; i >= n1; i--)
    {
         t[temp++] = n[i];   
    }
    for(int i = n1; i <=n2; i++)
        n[i] = t[i];
}

int main(void)
{
    int n1, n2;
    for(int i = 1; i <= 20; i++)   
        n[i] = i;
    for(int i = 0; i < 10; i++)
    {
        cin >> n1 >> n2;
        func(n1, n2);
    }
    for(int i = 1; i <= 20; i++)
        cout << n[i] << " ";
        
    return 0;
}
