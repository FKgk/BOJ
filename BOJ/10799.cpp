#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(void)
{
	string str;
	int cnt = 0;
	int ans = 0;
	bool check = false;
	cin >> str;

	for (string::size_type i = 0; i < str.size(); i++)
	{
		if (str[i] == '(')
		{
			cnt++;
			check = false;
		}
		else
		{
			if (check && cnt > 0)
			{
				cnt--;
				ans += 1;
			}
			else
			{
				cnt--;
				ans += cnt;
			}
			check = true;
		}
	}
	cout << ans << endl;
	
	return 0;
}
