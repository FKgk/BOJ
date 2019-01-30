#include <iostream>
using namespace std;

int main(void)
{
	int n, n1 = 0;
	cin >> n;
	
	for (int i = 5; i <= n; i*=5)
		n1 += n / i;

	cout << n1 << endl;

	return 0;
}
