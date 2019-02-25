#include <iostream>

using namespace std;

int num[9];

void func(int k, const int N, const int M)
{
	if (k == M  + 1)
	{
		for (int i = 1; i < k; i++)
			cout << num[i] << " ";
		cout << endl;
	}
	else
	{
		for (int i = num[k - 1] + 1; i <= N; i++)
		{
			num[k] = i;
			func(k + 1, N, M);
		}
	}
}

int main(void)
{
	int N, M;

	cin >> N >> M;

	func(1, N, M);

	return 0;
}
