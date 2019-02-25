#include <iostream>

using namespace std;

int main(void)
{
	int T, N, M;
	double answer;

	cin >> T;

	while (T--)
	{
		cin >> N >> M;

		answer = 1;
		N = N < (M - N) ? N : (M - N);

		for(int i = 1; i <= N; i++)
		{
			answer *= M--;
			answer /= i;
		}

		cout << (int)answer << endl;
	}

	return 0;
}
