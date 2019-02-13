#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int N, M;
	queue<int> que;
    
	cin >> N >> M;
    
	for (int i = 0; i < N; i++)
		que.push(i + 1);
	
	cout << "<";
	while (que.size() > 1)
	{
		for (int i = 1; i < M; i++)
		{
			que.push(que.front());
			que.pop();
		}
		cout << que.front() << ", ";
		que.pop();
	}
	cout << que.front() << ">" << endl;

	return 0;
}
