#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> v[51];
int n, m, t, ans;

int main(void)
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> t;
		v[t + 1].push_back(i);
	}

	cin >> m;
	queue<int> q;
	m++;
	q.push(m);

	for (int i = 1; i <= n; i++)
	{
		bool check = false;
		for (vector<int>::iterator iter = v[i].begin(); iter != v[i].end(); iter++)
			if (*iter == m)
			{
				v[i].erase(iter);
				check = true;
				break;
			}
		if (check)
			break;
	}


	while (q.empty() == false)
	{
		int t = q.front();
		q.pop();

		for (int tv : v[t])
			q.push(tv);

        v[t].clear();
		v[t].push_back(-2);
	}

	for (int i = 1; i <= n; i++)
		if (v[i].empty())
			ans++;

	cout << ans << endl;
}
// 부모 노드에 자식 노드 추가
