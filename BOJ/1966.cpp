#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int t, N, M, a;
	queue<int> que;
	priority_queue<int> cost;
	
    cin >> t;
    
	while (t--)
	{
		int ans = 0;
		cin >> N >> M;

		for (int i = 0; i < N; i++)
		{
			cin >> a;
			cost.push(a);
			que.push(a);
		}
        
		while (true)
		{
			while (que.front() != cost.top())
			{
				que.push(que.front());
				que.pop();

				M = M == 0 ? que.size() - 1 : M - 1;
			}

			M--;
			que.pop();
			cost.pop();
			ans++;
			if (M == -1)
			{
				cout << ans << endl;
				break;
			}
		}
		ans = 0;
		while (que.empty() == false)
			que.pop();
		while (cost.empty() == false)
			cost.pop();
	}
    
	return 0;
}
