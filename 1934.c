#include <stdio.h>

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}
int min(int a, int b)
{
	if (a < b) return a;
	else return b;
}

int main(void)
{
	int t; // 테스트 케이스의 수
	int a, b, m, n,p;
	int ans[1001];
    
	scanf("%d", &t);
    
	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		m = max(a, b);
		n = min(a, b);
		p = m % n;
		while (p != 0)
		{
			m = n;
			n = p;
			p = m % n;
		}
		ans[i] = (a * b) / n;
	}
	for (int i = 0; i < t; i++)
	{
		printf("%d\n", ans[i]);
	}

  return 0;
}
