#include <iostream>
#include <stdlib.h>
using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	int N;
	cin >> N;

	int *num[3];
	for (int i = 0; i < 3; i++)
		num[i] = (int *)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)
	{
		cin >> num[0][i] >> num[1][i];
		num[2][i] = 1;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (num[0][j] > num[0][i] && num[1][j] > num[1][i])
				num[2][i]++;
		}
	}
	for (int j = 0; j < N; j++)
	{
		cout << num[2][j] << ' ';
	}
	return 0;
}
