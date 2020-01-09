#include <stdio.h>

int main(void)
{
	char n[101];
	int cnt = 0;
	gets(n);
	int k = strlen(n);
	for (int i = 0; i < k; i++)
	{
		if (n[i] == '=')
		{
			if (i > 1 && n[i - 2] == 'd' && n[i - 1] == 'z')
			{
				cnt--;
			}
		}
		else if (n[i] == '-')
		{
		}
		else if (n[i] == 'j')
		{
			if (n[i - 1] != 'l' && n[i - 1] != 'n')
			{
				cnt++;
			}
		}
		else
		{
			cnt++;
		}
	}
	printf("%d", cnt);
  
  return 0;
}
