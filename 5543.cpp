#include <iostream>
using namespace std;

inline int min(int a, int b)
{
	return a < b ? a : b;
}

int main(void)
{
	int b1, b2, b3, d1, d2;
	cin >> b1 >> b2 >> b3 >> d1 >> d2;

	cout << min(min(b1, b2), b3) + min(d1, d2) - 50 << endl;

	return 0;
}
