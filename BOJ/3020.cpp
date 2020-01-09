#include <cstdio>
int top[500002];
int bottom[500002];
int main(void)
{
	int N, H, number1, number2, i, count = 1, ans;
	scanf("%d %d", &N, &H);
	for (i = 0; i < N; i += 2)
	{
		scanf("%d %d", &number1, &number2);
		bottom[number1]++;
		top[number2]++;
	}
	for (i = H; i > 0; i--)
	{
		top[i] += top[i + 1];
		bottom[i] += bottom[i + 1];
	}
	ans = top[1] + bottom[H];
	for (i = 2; i <= H; i++)
	{
		if (ans >= top[i] + bottom[H - i + 1])
		{
			if (ans == top[i] + bottom[H - i + 1])
				count++;
			else
            {
				count = 1;
                ans = top[i] + bottom[H - i + 1];                
            }
		}
	}
	printf("%d %d", ans, count);
}
