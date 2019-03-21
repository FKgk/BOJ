#include <iostream>
using namespace std;

int main(void)
{
	int pay[6] = { 500, 100, 50, 10, 5, 1 };
	int cost, ans = 0;

	cin >> cost;
	cost = 1000 - cost;

	for (int i = 0; i < 6; i++)
	{
		ans += (int)(cost / pay[i]);
		cost = cost - (int)(cost / pay[i]) * pay[i];
	}

	cout << ans << endl;
    
  return 0;
}
