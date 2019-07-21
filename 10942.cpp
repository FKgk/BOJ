#include <cstdio>
#pragma warning(disable:4996)
using namespace std;

int N[2001];
int map[2001][2001];
int n, s, e;

int main(void)
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &N[i]);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
			if (i - j > 0 && i + j <= n && N[i - j] == N[i + j])
				map[i - j][i + j] = 1;
			else
				break;

		for (int j = 0; j <= n; j++)
			if (i - j > 0 && i + j + 1 <= n && N[i - j] == N[i + j + 1])
				map[i - j][i + j + 1] = 1;
			else
				break;
	}

	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &s, &e);

		printf("%d\n", map[s][e]);
	}

}
