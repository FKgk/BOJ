#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(void)
{
	string str;
	set<string> ans;
	cin >> str;
	int length = str.size();
  
	for (int i = 0; i < length; i++)
		ans.insert(str.substr(i, length));
	for (set<string>::iterator i = ans.begin(); i != ans.end(); i++)
		cout << *i << endl;
    
  return 0;
}
