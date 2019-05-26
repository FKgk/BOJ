#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int N, n = 0, ans = 0;
	bool check = false;

	cin >> N;

	for (int i = N; i >= 0; i--)
	{
		cin >> n;
			
        if (n >= 1)
		{
			if (i == N)
			{
				if (n > 1)
					ans += (int)log10(n) + 1;
			}
			else
				ans += (int)log10(n) + 2;
		}


		if (check)
		{
			if (i > 0)
				ans += 2;
		}
		else
		{
			ans += 1;
			check = true;
		}
	}

	cout << ans + 1 << endl;

	return 0;
}
