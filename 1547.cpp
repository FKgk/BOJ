#include <iostream>
using namespace std;
inline void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}

int main(void)
{
	int m, n1, n2;
	int num[4] = { 0, 1, 0, 0 };

	cin >> m;
	while (m--)
	{
		cin >> n1 >> n2;
		swap(num[n1], num[n2]);
	}

	for (int i = 1; i < 4; i++)
		if (num[i])
			cout << i << endl;

	return 0;
}
