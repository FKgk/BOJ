#include <stdio.h>

int main(void)
{
	int n;
	int cnt = 1;
	scanf("%d", &n);
	while(n != 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else if (n % 2 == 1)
		{
			n = 3 * n + 1;
		}
        cnt++;
	}
    printf("%d", cnt);
    
    return 0;
}
