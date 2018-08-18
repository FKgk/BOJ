#include <stdio.h>

int main(void)
{
	int ans_num = 1;
	int n;
	int i = 1;
    
	scanf("%d", &n);
    
	while (ans_num < n)
	{
		ans_num = ans_num + (6 * i);
		i++;
	}
	printf("%d\n", i);
  
  return 0;
}
