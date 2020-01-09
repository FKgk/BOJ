#include <stdio.h>

int swap(int n)
{
	int a = n / 100;
	int b = (n / 10) - (a * 10);
	int c = n %  10;
	return (c * 100) + (b * 10) + a;
}

int main(void)
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	n1 = swap(n1);
	n2 = swap(n2);
	if (n1 > n2)
	{
		printf("%d", n1);
	}
	else if (n2 > n1)
	{
		printf("%d", n2);
	}
  
  return 0;
}
