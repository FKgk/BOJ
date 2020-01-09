#include <stdio.h>

int main(void)
{
    char ch[10];
		for (int i = 0; i<8; i++)
		{
			ch[i] = getchar();
			if (ch[i] == ' ')
			{
				i--;
			}
		}


		if (ch[0] == '1')
		{
			for (int i = 0; i<7; i++)
			{
				if (ch[i]>ch[i + 1])
				{
					printf("mixed");
					return 0;
				}
			}
			printf("ascending");
		}


		else if (ch[0] == '8')
		{
			for (int i = 0; i<7; i++)
			{
				if (ch[i]<ch[i + 1])
				{
					printf("mixed");
					return 0;
				}
			}
			printf("descending");
		}


		else
		{
			printf("mixed");
		}
    
    return 0;
}
