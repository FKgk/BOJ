#include <iostream>
using namespace std;

int pre[7];
int precost[7] = { 0, 5000000, 3000000, 2000000, 500000, 300000, 100000 };
int fes[7];
int fescost[6] = { 0, 5120000, 2560000, 1280000, 640000, 320000 };
int main(void)
{
	int t, n, m, sum;

	for (int i = 1; i <= 6; i++)
	{
		pre[i] = i + pre[i - 1];
		fes[i] = (1 << i) - 1;
	}

	cin >> t;
	while (t--)
	{
		cin >> n >> m;
		sum = 0;

		for (int i = 0; i <= 6; i++)
		{
			if (n <= pre[i])
			{
				sum += precost[i];
				break;
			}
		}
		for (int i = 0; i <= 5; i++)
		{
			if (m <= fes[i])
			{
				sum += fescost[i];
				break;
			}
		}

		cout << sum << endl;
	}

	return 0;
}
