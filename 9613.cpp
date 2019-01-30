#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	int t = a % b;
	while (t != 0)
	{
		a = b;
		b = t;
		t = a % b;
	}
	return b;
}

int main(void)
{
	int t, n, i, j, arr[102];
	long long int total;
	cin >> t;

	while (t--)
	{
		cin >> n;
		for (i = 0; i < n; i++)
			cin >> arr[i];

		total = 0;
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
					total += GCD(arr[i], arr[j]);

		cout << total << endl;
	}

	return 0;
}
