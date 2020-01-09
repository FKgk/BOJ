#include <stdio.h>
int main(void)
{
   char ch[102];
	gets(ch);
	int n = strlen(ch);
	for (int i = 0; i<n; )
	{
		printf("%c", ch[i]);
        i++;
		if (i % 10 == 0)
			printf("\n");
	}
	
  return 0;
}
