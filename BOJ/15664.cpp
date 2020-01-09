#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;

map<int, int> check;
int inputNum[9];
int outputNum[9];

void func(int k, const int N, const int M, int index)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", outputNum[i]);
		printf("\n");
	}
	else
	{
		for (int i = index; i <= N; i++)
		{
			if (inputNum[i - 1] != inputNum[i] && check[inputNum[i]] != 0)
			{
				outputNum[k] = inputNum[i];
				check[inputNum[i]]--;

				func(k + 1, N, M, i);

				check[inputNum[i]]++;
			}
		}
	}
}
int main(void)
{
	int N, M;

	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++)
	{
		scanf("%d", &inputNum[i]);
		check[inputNum[i]]++;
	}

	sort(inputNum + 1, inputNum + N + 1);

	func(0, N, M, 1);

	return 0;
}
