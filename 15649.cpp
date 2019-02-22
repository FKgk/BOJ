#include <cstdio>

using namespace std;

bool isused[9];
int arr[9];

void func(int k, const int N, const int M)
{
	if (k == M)
	{
		for (int i = 0; i < M; i++)
			printf("%d ", arr[i]);
		printf("\n");

		return;
	}
	for (int i = 1; i <= N; i++)
	{
		if (!isused[i])
		{
			arr[k] = i;
			isused[i] = true;
			func(k + 1, N, M);
			isused[i] = false;
		}
	}
}


int main(void)
{
	int N, M;

	scanf("%d %d", &N, &M);

	func(0, N, M);
}
