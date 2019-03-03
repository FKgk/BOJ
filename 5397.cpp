#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(void)
{
    int t;
    string s;
    stack<char> l, r;
    
    cin >> t;
    while(t--)
    {
        cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '<')
            {
                 if(l.empty() == false)
                 {
                     r.push(l.top());
                     l.pop();
                 }
            }
            else if(s[i] == '>')
            {
                if(r.empty() == false)
                {
                    l.push(r.top());
                    r.pop();
                }
            }
            else if(s[i] == '-')
            {
                if(l.empty() == false)
                {
                    l.pop();
                }
            }
            else
            {
                l.push(s[i]);
            }
        }
        
        while(l.empty() == false)
        {
            r.push(l.top());
            l.pop();
        }
        
        while(r.empty() == false)
        {
            cout << r.top();
            r.pop();
        }
        cout << endl;
    }
    return 0;
}
