#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
using namespace std;

int main(void)
{
	vector< vector<int> > map;
	stack<int> dfs;
	set<int> notVisited;

	int n, m, n1, n2, t, ans = 0;;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		map.push_back(vector<int>(1));
		notVisited.insert(i);
	}

	while (m--)
	{
		cin >> n1 >> n2;
		n1--;
		n2--;
		map[n1].push_back(n2);
		map[n2].push_back(n1);
	}
	
	while(notVisited.empty() == false)
	{
		dfs.push(*notVisited.begin());
		ans++;
		while (dfs.empty() == false)
		{
			t = dfs.top();
			dfs.pop();

			if (binary_search(notVisited.begin(), notVisited.end(), t))
			{
				for (vector<int>::size_type i = 0; i < map[t].size(); i++)
					dfs.push(map[t][i]);

				notVisited.erase(t);
			}
		}
	}
	

	cout << ans << endl;;
	return 0;
}
