#include <stdio.h>

int main(void)
{
	int n, a, b, c;
	int cnt = 0;
	int answer = -1;
	
	scanf("%d", &n);
	int num = n;
	
	while (1)
	{
		b = ( n / 10 ) + ( n % 10 );
		c = n % 10;
		n = c * 10 + ( b % 10 );
		cnt = cnt + 1;
        if(num == n)
        {
            break;
        }
	}
	printf("%d", cnt);

	return 0;
}
