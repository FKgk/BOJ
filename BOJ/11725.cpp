#include <cstdio>
#include <vector>
using namespace std;

vector<int> N[100001];
int ans[100001];

void inorder(int x, int p)
{
	for (int i = 0; i < N[x].size(); i++)
	{
		if (N[x][i] != p)
		{
			ans[N[x][i]] = x;
			inorder(N[x][i], x);
		}
	}
}

int main(void)
{
	int n, n1, n2;
	scanf("%d", &n);
	
	for (int i = 1; i < n; i++)
	{
		scanf("%d %d", &n1, &n2);
		N[n1].push_back(n2);
		N[n2].push_back(n1);
	}
	inorder(1, 1);

	for (int i = 2; i <= n; i++)
		printf("%d\n", ans[i]);
	
	return 0;
}
