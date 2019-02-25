#include <iostream>

bool issued[16];		// X
bool checkright[30];	// X + Y
bool checkleft[30];		// X - Y + N

using namespace std;

int func(const int N, int k)
{
	if (N == k)
		return 1;
	
	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		if (!issued[i] && 
			!checkright[i + k] && 
			!checkleft[i - k + N] )
		{
			issued[i] = true;
			checkright[i + k] = true;
			checkleft[i - k + N] = true;

			ans += func(N, k + 1);

			issued[i] = false;
			checkright[i + k] = false;
			checkleft[i - k + N] = false;
		}
	}
	
	return ans;
}

int main(void)
{
	int N;
	cin >> N;

	cout << func(N, 0) << endl;


	return 0;
}
