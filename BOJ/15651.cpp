#include <cstdio>

int num[8], N, M;

void func(int k)
{
	if (k == M)
	{
		for (int i = 0; i < k; i++)
			printf("%d ", num[i]);
		printf("\n");
	}
	else
	{
		for (int i = 1; i <= N; i++)
		{
			num[k] = i;
			func(k + 1);
		}
	}
    
    return ;
}
int main(void)
{
	scanf("%d %d", &N, &M);

	func(0);
  
  return 0;
}
