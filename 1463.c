#include <stdio.h>

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main(void)
{
	int c;
	int n[1000001];
	scanf("%d", &c);
	n[0] = 0;
    n[1] = 0;
	for (int i = 2; i <= c; i++)
	{
		n[i] = n[i - 1] + 1;
		if (i % 2 == 0)
		{
			n[i] = min( n[i], n[i / 2] + 1);
		}
	    if (i % 3 == 0)
		{
			n[i] = min( n[i], n[i / 3] + 1);
		}
	}
        printf("%d\n", n[c]);	
        
  return 0;
}
