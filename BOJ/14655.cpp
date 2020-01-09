#include <iostream>
using namespace std;

int main(void)
{
	int N, n, ans = 0;

	cin >> N;
	for (int i = 0; i < N * 2; i++)
	{
		cin >> n;
		ans += n > 0 ? n : -n;
	}

	cout << ans << endl;

	return 0;
}
