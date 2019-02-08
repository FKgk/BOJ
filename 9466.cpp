#include <iostream>
using namespace std;

int v[100001];
bool check[100001];

bool dfs(int x, int i)
{
	if (check[x] == false)
	{
		check[x] = true;
		if (dfs(v[x], i))
		{
			check[x] = false;
			return true;
		}
		else
			return false;
	}
	else if (x == i)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main(void)
{
	int t, n, ans;
	

	cin >> t;
	while (t--)
	{
		cin >> n;
		ans = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> v[i];
			check[i] = false;
		}

		for (int i = 1; i <= n; i++)
		{
			if (check[i] == false)
			{
				check[i] = true;
				if (dfs(v[i], i))
				{
					ans++;
				}
			}
		}

		cout << ans << endl;
	}

	return 0;
}
