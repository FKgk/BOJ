#include <iostream>
#include <string>
using namespace std;
int n1[27], n2[27];
int abs(int a)
{
    if (a > 0)
        return a;
    return -a;
}
int main(void)
{
    string s1, s2;
    int ans = 0;
    cin >> s1 >> s2;
    
    for(int i = 0; i < s1.size(); i++)
        n1[ s1[i] - 'a']++;
    for(int i = 0; i < s2.size(); i++)
        n2[ s2[i] - 'a']++;
    for(int i =0; i < 26; i++)
        ans += abs(n1[i] - n2[i]);
    
    cout << ans << endl;
    
    return 0;
}
