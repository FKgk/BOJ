#include <stdio.h>

int main(void)
{
	int N, a, ans, Answer= -1;
	scanf("%d", &N);
    
	for (int i = N - 1; i > 0; i--)
	{
		ans = a = i;

		while (a != 0)
		{
			ans += a % 10;
			a = a / 10;
		}
        
		if (N == ans)
			Answer = i;
	}
    
	printf("%d\n", Answer == -1 ? 0 : Answer);
    
	return 0;
}
