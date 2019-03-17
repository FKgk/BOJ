#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> relations[101];
int Number[101];

int main(void)
{
	int n, start, end, m, n1, n2;
	queue<int> que;

	cin >> n;
	cin >> start >> end;
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> n1 >> n2;

		relations[n1].push_back(n2);
		relations[n2].push_back(n1);
	}

	que.push(start);

	while (que.empty() == false && que.front() != end)
	{
		int t = que.front();
		que.pop();

		for (int i = 0; i < relations[t].size(); i++)
		{
			if (Number[relations[t][i]] == 0)
			{
				que.push(relations[t][i]);
				Number[relations[t][i]] = Number[t] + 1;
			}
		}
	}

	if (que.front() == end)
		cout << Number[end] << endl;
	else
		cout << "-1" << endl;

	return 0;
}
