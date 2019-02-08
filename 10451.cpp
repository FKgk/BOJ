#include <iostream>
#include <vector>
using namespace std;
int v[1001];
bool check[1001];
int main(void)
{
	int t, N, i, ans = 0;

	cin >> t;
	while (t--)
	{
		cin >> N;
		for (i = 1; i <= N; i++)
		{
			cin >> v[i];
		}

		for (i = 1; i <= N; i++)
		{
			if (check[i] == false)
			{
				check[i] = true;
				int x = v[i];

				while (!check[x])
				{
					check[x] = true;
					x = v[x];
				}
				ans++;
			}
		}

		cout << ans << endl;
		ans = 0;
		for (i = 1; i <= N; i++)
		{
			check[i] = false;
		}

	}

    return 0;
}
