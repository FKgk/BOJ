#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n, b, t;
	string ans;

	cin >> n >> b;

	while (n != 0)
	{
		t = n % b;
		if (t >= 10)
			ans.insert(ans.begin(), 'A' + t - 10);
		else
			ans.insert(ans.begin(), '0' + t);
		n = (int)(n / b);
	}
	cout << ans << endl;

	return 0;
}
