#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int N, n1, n2, ans = 0;
	cin >> N >> n1 >> n2;

	if (n1 > n2)
		swap(n1, n2);
	
	while (!(n1 == n2 ))
	{
		n1 = (n1 + 1) / 2;
		n2 = (n2 + 1) / 2;
		ans++;
	}

	cout << ans << endl;

	return 0;
}
