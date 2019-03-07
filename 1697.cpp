#include <iostream>
#include <queue>
using namespace std;

int S[100001];

int main(void)
{
	int N, K, t, i = 0;
	queue<int> que;

	cin >> N >> K;

	que.push(N);

	while (que.front() != K)
	{
		t = que.front();
		que.pop();

		if (t > 0 && (S[t - 1] == 0 || S[t - 1] > S[t] + 1))
		{
			S[t - 1] = S[t] + 1;
			que.push(t - 1);
		}

		if (t < 100000 && (S[t + 1] == 0 || S[t + 1] > S[t] + 1))
		{
			S[t + 1] = S[t] + 1;
			que.push(t + 1);
		}

		if (t <= 50000 && (S[t * 2] == 0 || S[t*2] > S[t] + 1))
		{
			S[t * 2] = S[t] + 1;
			que.push(2 * t);
		}
	}

	cout << S[K] << endl;

	return 0;
}
