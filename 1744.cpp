#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(vector<int> & v)
{
    bool check = v.size() % 2 == 1 ? true : false;
    int ans = 0, size = check ? v.size() - 1 : v.size();
    for(int i = 0; i < size; i+=2)
        ans += v[i] * v[i + 1];
    if(check)
        ans += *(v.end() - 1);
    return ans;
}

int main(void)
{
    vector<int> plus_list, minus_list;

    int N, n, ans = 0;
    cin >> N;
    while(N--)
    {
        cin >> n;
        if(n > 1)
            plus_list.push_back(n);
        else if(n == 1)
            ans++;
        else
            minus_list.push_back(n);
    }
    
    sort(plus_list.rbegin(), plus_list.rend());
    sort(minus_list.begin(), minus_list.end());
    
    ans += func(plus_list);
    ans += func(minus_list);
    
    cout << ans << endl;

    return 0;
}
