#include <iostream>
using namespace std;

int main(void)
{
	int N, ans = 1, t;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		ans += (t - 1);
	}

	cout << ans << endl;

	return 0;
}
