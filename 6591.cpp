#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	double ans;
	int n1, n2, t, i, j;
	cin >> n1 >> n2;

	while (n1 != 0 || n2 != 0)
	{
		t = n2 = n2 <= n1 - n2 ? n2 : n1 - n2;

		ans = 1;

		for(i = 0; i < t; i++)
			ans *= n1--;

		for(j = 0; j < t; j++)
			ans /= n2--;

		cout << (int)ans << endl;

		cin >> n1 >> n2;
	}

	return 0;
}
