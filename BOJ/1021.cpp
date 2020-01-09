#include <iostream>
#include <deque>
using namespace std;

deque<int> deq;
bool getTarget(int order)
{
	for (deque<int>::size_type  count = 0; count < deq.size(); count++)
		if (deq[count] == order)
			return count < (deq.size() - count + 1);
	return false;
}
int main(void)
{
	int N, M, ans = 0;
	int order;
	
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		deq.push_back(i);

	for (int i = 0; i < M; i++)
	{
		cin >> order;

		if (getTarget(order)) //True 정방향, Flase 역방향
		{
			while (*deq.begin() != order)
			{
				deq.push_back(deq.front());
				deq.pop_front();
				ans++;
			}
			deq.pop_front();
		}
		else
		{
			while (*deq.begin() != order)
			{
				deq.push_front(deq.back());
				deq.pop_back();
				ans++;
			}
			deq.pop_front();
		}
	}
	cout << ans << endl;

	return 0;
}
