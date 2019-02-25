#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;

map<int, bool> check;
int inputNum[9];
int outputNum[9];

void func(int k, const int N, const int M,int i)
{
	if (k == M)
	{
		for (i = 0; i < M; i++)
			printf("%d ", outputNum[i]);
		printf("\n");
	}
	else
	{
		for (; i <= N; i++)
		{
			if (!check[inputNum[i]])
			{
				outputNum[k] = inputNum[i];
				check[inputNum[i]] = true;

				func(k + 1, N, M, i + 1);

				check[inputNum[i]] = false;
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
		check.insert({ inputNum[i], false });
	}

	sort(inputNum  + 1, inputNum + N + 1);
	
	func(0, N, M, 1);

	return 0;
}
