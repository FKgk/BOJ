#include <iostream>
#include <queue>
using namespace std;

int num[1000001];

int main(void)
{
	int F, S, G, U, D, t;
	queue<int> que;
	cin >> F >> S >> G >> U >> D;

	num[S] = 1;
	que.push(S);

	while (que.empty() == false)
	{
		t = que.front();
		que.pop();

		if (t + U <= F && (num[t + U] == 0 || num[t] + 1 < num[t + U]))
		{
			num[t + U] = num[t] + 1;
			que.push(t + U);
		}

		if (t - D >= 0 && (num[t - D] == 0 || num[t] + 1 < num[t - D]))
		{
			num[t - D] = num[t] + 1;
			que.push(t - D);
		}
	}

	if (num[G])
		cout << num[G] - 1<< endl;
	else
		cout << "use the stairs" << endl;
}
