#include <stdio.h>

int main(void)
{
	int n;
	int answer[100];
	char ch[51];
	int cnt1 = 0;
	scanf("%d", &n);
	gets(ch);
	for (int i = 0; i < n; i++)
	{
		gets(ch);
        int k = strlen(ch);
		if ( ch[0] == ')' || ch[k-1] == '(' )
		{
			answer[i] = 0;
			continue;
		}
		for (int j = 0; j < k; j++)
		{
			if (ch[j] == '(')
			{
				cnt1++;
			}
			else if (ch[j] == ')')
			{
				cnt1--;
			}
			if (cnt1 < 0)
			{
				answer[i] = 0;
				break;
			}
		}
		if (cnt1 == 0)
		{
			answer[i] = 1;
		}
		else if (cnt1 > 0)
		{
			answer[i] = 0;
		}
		cnt1 = 0;
	}

	for (int i = 0; i < n; i++)
	{
		if (answer[i] == 1)
		{
			printf("YES\n");
		}
		else if (answer[i] == 0)
		{
			printf("NO\n");
		}
	}
  
  return 0;
}
