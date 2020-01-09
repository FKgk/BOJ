#include <stdio.h>

int num(int a)
{
	if (a < 10) {return a;}
	else {return (a % 10);}
}

int main(void)
{
	int t;
	int a, b;
	int ans[1002];
    
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);

		b = b % 4;
        
		switch (num(a))
		{
		case 0:
			ans[i] = 10;
			break;
		case 1:
			ans[i] = 1;
			break;
		case 2:
			switch (b)
			{
			case 0:
				ans[i] = 6;
				break;
			case 1:
				ans[i] = 2;
				break;
			case 2:
				ans[i] = 4;
				break;
			case 3:
				ans[i] = 8;
				break;
			}
			break;
		case 3:
			switch (b)
			{
			case 0:
				ans[i] = 1;
				break;
			case 1:
				ans[i] = 3;
				break;
			case 2:
				ans[i] = 9;
				break;
			case 3:
				ans[i] = 7;
				break;
			}
			break;
		case 4:
			if (b % 2 == 1) ans[i] = 4;
			else ans[i] = 6;
			break;
		case 5:
			ans[i] = 5;
			break;
		case 6:
			ans[i] = 6;
			break;
		case 7:
			switch (b)
			{
			case 0:
				ans[i] = 1;
				break;
			case 1:
				ans[i] = 7;
				break;
			case 2:
				ans[i] = 9;
				break;
			case 3:
				ans[i] = 3;
				break;
			}
			break;
		case 8:
			switch (b)
			{
			case 0:
				ans[i] = 6;
				break;
			case 1:
				ans[i] = 8;
				break;
			case 2:
				ans[i] = 4;
				break;
			case 3:
				ans[i] = 2;
				break;
			}
			break;
		case 9:
			if ((b%2) == 1) ans[i] = 9;
			else ans[i] = 1;
			break;
		}
	}

	for (int i = 0; i < t; i++)
	{
		printf("%d\n", ans[i]);
	}
}
