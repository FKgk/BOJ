#include <stdio.h>

int main(void)
{
	int  t, h, w, n;
	int ans[1000];
	int rh, rn;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d %d", &h, &w, &n);
		rh = (n-1) % h + 1;
		rn = (n-1) / h + 1;
		ans[i] = rh * 100 + rn;
	}
	for (int j = 0; j < t; j++)
	{
		printf("%d \n", ans[j]);
	}
  
  return 0;
}
