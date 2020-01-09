#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> map[20001];
int check[20001];

bool dfs(int node, int color)
{
	check[node] = color;

	for (vector<int>::size_type i = 0; i < map[node].size(); i++)
	{
		if (check[map[node][i]] == 0)
        {
            if  (!dfs(map[node][i], 3 - color))
				return false;
        }
		else if (check[map[node][i]] == check[node])
			return false;
	}
	return true;
}

int main(void)
{
	int k, v, e, n1, n2;
	bool answer;
	cin >> k;

	while (k--)
	{
		answer = true;
		cin >> v >> e;	// 정점, 간선의 개수

		while (e--)
		{
			cin >> n1 >> n2;
			map[n1].push_back(n2);
			map[n2].push_back(n1);
		}

		for (int x = 1; x <= v; x++)
		{
			if (check[x] == 0)
			{
				if (!dfs(x, 1))
				{
					answer = false;
					break;
				}
			}
		}

		if (answer)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		for (int i = 1; i <= v; i++)
		{
			map[i].clear();
			check[i] = 0;
		}
	}

	return 0;
}
