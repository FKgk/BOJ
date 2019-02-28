#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, max = 0;
	int num[100001];

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> num[i];

	sort(num, num + N);

	for (int i = N - 1; i >= 0; i--)
		if (num[i] * (N - i) > max)
			max = num[i] * (N - i);
	
	cout << max << endl;

	return 0;
}
