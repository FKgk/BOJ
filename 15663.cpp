#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;

map<int, int> check;
int inputNum[9];
int outputNum[9];

void func(int k, const int N, const int M)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", outputNum[i]);
		printf("\n");
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			if ( inputNum[i - 1] != inputNum[i] && check[inputNum[i]] != 0 )
			{
				outputNum[k] = inputNum[i];
				check[inputNum[i]]--;
				
				func(k + 1, N, M);

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

	func(0, N, M);

	return 0;
}
