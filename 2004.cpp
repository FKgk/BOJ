#include <iostream>
using namespace std;

int main(void)
{
	long long int n, m, t, n1 = 0, n2 = 0, i;
	cin >> n >> m;
	t = n - m;

	for (i = 2; i <= n; i *= 2)
    {
        n1 += n / i;
        n1 -= m / i;
        n1 -= t / i;
	}
    for (i = 5; i <= n; i *= 5)
    {
        n2 += n / i;
        n2 -= m / i;
        n2 -= t / i;
    }

	i = (n1 < n2) ? n1 : n2;
	cout << i;
    
	return 0;
}
