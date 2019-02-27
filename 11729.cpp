#include <cstdio>

void hanoi(int a, int b, int n)
{
	if (n == 1)
	{
		printf("%d %d\n", a, b);
	}
	else
	{
		hanoi(a, 6 - (a + b), n - 1);

		printf("%d %d\n", a, b);

		hanoi(6 - (a + b), b, n - 1);
	}
}

int main(void)
{
	int n;
  scanf("%d", &n);
    
  printf("%d\n", (1 << n) - 1);

	hanoi(1, 3, n);
    
  return 0;
}
