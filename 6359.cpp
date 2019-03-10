#include <iostream>
using namespace std;

bool rooms[101];
int n;

void clearRoom()
{
	for (int i = 1; i <= n; i++)
		rooms[i] = false;
}

int main(void)
{
	int t, ans;
	cin >> t;

	while (t--)
	{
		ans = 0;

		cin >> n;
		for (int i = 2; i <= n; i++)
			for (int j = i; j <= n; j+=i)
				rooms[j] = !rooms[j];

		for (int i = 1; i <= n; i++)
			if (!rooms[i])
				ans++;

		cout << ans << endl;
		clearRoom();
	}

	return 0;
}
