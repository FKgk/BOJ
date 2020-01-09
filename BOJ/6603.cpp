#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, cnt, ans[6];
	bool newline = false;

    cin >> n;

	while (n != 0)
	{
		int *nums = new int[n + 1];
		int *selects = new int[n + 1];

		for (int i = 0; i < n; i++)
		{
			cin >> nums[i];

			if (i < 6)
				selects[i] = 0;
			else
				selects[i] = 1;
		}

		if (newline)
			cout << endl;
		else
			newline = true;

		do
		{
			cnt = 0;
			for (int i = 0; i < n; i++)
				if (selects[i] == 0)
					ans[cnt++] = nums[i];

			for (int i = 0; i < 5; i++)
				cout << ans[i] << " ";
			cout << ans[5] << endl;

		} while (next_permutation(selects, selects + n));

		cin >> n;
	}

	return 0;
}
