#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> v;
    int N, num, search_number;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    cin >> search_number;
    cout << count(v.begin(), v.end(), search_number);
    
    return 0;
}
