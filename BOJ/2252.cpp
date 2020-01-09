#include <iostream>
#include <queue>
#include <stack>
using namespace std;

vector<int> students[32001];
int visited[32001];
stack<int> ans;

void dfs(int i)
{
	for (int j = 0; j < students[i].size(); j++)
	{
		if (visited[students[i][j]] == 0)
		{
			visited[students[i][j]] = 1;
			dfs(students[i][j]);
			ans.push(students[i][j]);
		}
	}
}

int main(void)
{
	int N, M, n1, n2;

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> n1 >> n2;
		students[n1].push_back(n2);
	}

	for (int i = 1; i <= N; i++)
	{
		if (visited[i] == 0)
		{
			visited[i] = 1;
			dfs(i);
			ans.push(i);
		}
	}

	while (ans.empty() == false)
	{
		cout << ans.top() << " ";
		ans.pop();
	}

	return 0;
}
