#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int num[20];
	int N, S, k, t, sum, ans = 0;

	cin >> N >> S;
	for (int i = 0; i < N; i++)
		cin >> num[i];

	k = (int)pow(2, N);

	for (int i = 1; i < k; i++)
	{
		t = i;
		sum = 0;
		for (int j = 0; j < N; j++)
		{
			if (t % 2)
				sum += num[j];
			t /= 2;
		}
		if (sum == S)
			ans++;
	}

	cout << ans << endl;

    return 0;
}
