#include <stdio.h>
#include <string.h>

int main(void)
{
	int N,n;
	int num[50000];
	int n1 = 0, n2 = 0;
	char s[10];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", &s);
		if (!strcmp(s, "push"))
		{
			scanf("%d", &n);
			num[n2] = n;
			n2++;
		}
		else if (!strcmp(s, "pop"))
		{
			if (n2 - n1 > 0)
			{
				printf("%d\n", num[n1]);
				n1++;
			}
			else
			{
				printf("-1\n");
			}
		}
		else if (!strcmp(s, "size"))
		{
			printf("%d\n", n2 - n1);
		}
		else if (!strcmp(s, "empty"))
		{
			if (n2 - n1 > 0)
			{
				printf("0\n");
			}  
			else
			{
				printf("1\n");
			}
		}
		else if (!strcmp(s, "front"))
		{
			if (n2 - n1 > 0)
			{
				printf("%d\n", num[n1]);
			}
			else
			{
				printf("-1\n");
			}
		}
		else if (!strcmp(s, "back"))
		{
			if (n2 - n1 > 0)
			{
				printf("%d\n", num[n2-1]);
			}
			else
			{
				printf("-1\n");
			}
		}
	}

	return 0;
}
