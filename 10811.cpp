#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int N, M, num1, num2;
	cin >> N >> M;
	vector<int> v(N+1);
	vector<int>::iterator iter = v.begin();
	for (int i = 1; i <= N; i++)
		v[i] = i;

	for (int i = 0; i < M; i++)
	{
		cin >> num1 >> num2;
		vector<int> temp(iter + num1, iter + num2 + 1);
		swap_ranges(temp.rbegin(), temp.rend(), v.begin() + num1);
	}

	for (iter = v.begin() + 1; iter != v.end(); iter++)
		cout << *iter << " ";

	return 0;
}
