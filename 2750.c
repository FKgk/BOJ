#include <stdio.h>

int main(void)
{
	int t;
	int n[1000];
	int a;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n[i]);
	}
	for (int i = 0; i < t; i++)
	{
		for (int j = i+1; j < t; j++)
		{
			if (n[i] > n[j])
			{
				a = n[i];
				n[i] = n[j];
				n[j] = a;
			}
		}
        printf("%d\n", n[i]);	
	}
  
  return 0;
}
