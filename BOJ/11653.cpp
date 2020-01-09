#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	for(int i  = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			cout << i << endl;
			n /= i;
		}
	}
    
	if (n > 1)
		cout << n << endl;

	return 0;
}
