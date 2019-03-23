#include <cstdio>
using namespace std;

int x, y;
int cnt = 0;

void func(int n, int r, int c)
{
	if (n == 2)
	{
		if (r == y && c == x)
		{
			printf("%d\n", cnt);
			return;
		}
		cnt++;
		if (r == y && c + 1 == x)
		{
			printf("%d\n", cnt);
			return;
		}
		cnt++;
		if (r + 1 == y && c == x)
		{
			printf("%d\n", cnt);
			return;
		}
		cnt++;
		if (r + 1 == y && c + 1 == x)
		{
			printf("%d\n", cnt);
			return;
		}
		cnt++;
		return;
	}
	n /= 2;

	func(n, r, c);
	func(n, r, c + n);
	func(n, r + n, c);
	func(n, r + n, c + n);
}

int main(void)
{
	int n;
	scanf("%d %d %d", &n, &y, &x);

	func((1 << n), 0, 0);

	return 0;
}
