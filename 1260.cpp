#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int main(void)
{
	vector< vector<int> > map;
	queue<int> bfs;
	stack<int> dfs;
	set<int> visited;

	int n, m, v, n1, n2, t;
	cin >> n >> m >> v;

	for (int i = 0; i <= n; i++)
	{
		map.push_back(vector<int>(1));
	}

	while (m--)
	{
		cin >> n1 >> n2;
		map[n1].push_back(n2);
		map[n2].push_back(n1);
	}
	bfs.push(v);
	dfs.push(v);
	while (dfs.empty() == false)
	{
		t = dfs.top();
		dfs.pop();

		if (binary_search(visited.begin(), visited.end(), t) == false)
		{
			cout << t << " ";
			visited.insert(t);
			sort(map[t].begin(), map[t].end());
			for (vector<int>::size_type i = map[t].size() - 1; i > 0 ; i--)
			{
				dfs.push(map[t][i]);
			}
		}
	}

	cout << endl;
	visited.clear();
	
	while (bfs.empty() == false)
	{
		t = bfs.front();
		bfs.pop();

		if (binary_search(visited.begin(), visited.end(), t) == false)
		{
			cout << t << " ";
			visited.insert(t);
			for (vector<int>::size_type i = 1; i < map[t].size(); i++)
			{
				bfs.push(map[t][i]);
			}
		}
	}

	return 0;
}
