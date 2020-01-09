#include <iostream>
#include <algorithm>

using namespace std;

int P[1001];

int main(void)
{
	int N, ans = 0;

	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> P[i];
	
	sort(&P[1], &P[N + 1]);

	for (int i = 1; i <= N; i++)
	{
		P[i] += P[i - 1];
		ans += P[i];
	}

	cout << ans << endl;

	return 0;
}
