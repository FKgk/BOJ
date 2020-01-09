#include <stdio.h>
int main()
{
    int cnt = 0;
	int k;
	char n[100];
	int a[26];
	for (int i = 0; i<26; i++)
	{
		a[i] = -1;
	}
	for (int i = 0; i < 100; i++)
	{
		n[i] = getchar();
		if (n[i] == '\n')
		{
			k = i;
			break;
		}
	}
	for (int i = 0; i<k; i++)
	{
		cnt = n[i] - 'a';
		if (a[cnt] == -1)
		{
			a[cnt] = i;
		}
	}
	for (int i = 0; i<26; i++)
	{
		printf("%d ", a[i]);
	}
    
  return 0;
}
