#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> v, ans;
vector<char> c = { 'a', 'e', 'i', 'o', 'u' };
int n, m, c1;
char t;

void func(int t, int count)
{
	if (count == n)
	{
		if (c1 >= 1 && (n - c1) >= 2)
		{
			for (char a : ans)
				cout << a;
			cout << endl;
		}
	}
	else
	{
		for (int i = t; i < m; i++)
		{
			bool check = false;
			
			ans.push_back(v[i]);
			if (find(c.begin(), c.end(), v[i]) != c.end())
			{
				c1++;
				check = true;
			}

			func(i + 1, count + 1);
			
			if (check)
				c1--;
			ans.erase(ans.end() - 1);
		}
	}
}


int main(void)
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());

	func(0, 0);
}
