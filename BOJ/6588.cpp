#include <cstdio>
using namespace std;

bool check[1000001] = { false , }; // false 가 소수
int decimal[78500];

int main(void)
{
	int n, p = 0;

	for (int i = 2; i <= 1000000; i++)
	{
		if (check[i] == false)
		{
			decimal[p++] = i;
			for (int j = i + i; j <= 1000000; j += i)
				check[j] = true;
		}
	}
	
	while (true)
	{
		scanf("%d", &n);
		if (n == 0)
			return 0;
		for (int i = 1; i < p; i++)
		{
			if (check[n - decimal[i]] == false)
			{
				printf("%d = %d + %d\n", n, decimal[i], n - decimal[i]);
				break;
			}
		}
	}

	return 0;
}
