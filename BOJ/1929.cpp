#include <cstdio>
#include <cmath>
using namespace std;

int main(void)
{
	int n1, n2, i, end;
	bool check;
	scanf("%d %d", &n1, &n2);
	if (n1 == 1)
		n1++;
	while(n1 <= n2)
	{
		check = true;
		end = sqrt(n1);
		for (i = 2; i <= end; i++)
			if (n1 % i == 0)
			{
				check = false;
				break;
			}
		if (check)
			printf("%d\n", n1);
		n1++;
	}

	return 0;
}
