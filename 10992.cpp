#include <iostream>

using namespace std;

void star(int n, int absolute)
{
	if (n == absolute)
	{
		for (int i = 2 * n - 1; i > 0; i--)
			cout << "*";
		cout << endl;
		return;
	}
	for (int i = 0; i < absolute - n; i++)
		cout << " ";
	cout << "*";
	for (int i = 0; i < (n - 1) * 2 - 1; i++)
		cout << " ";
	if (n > 1)
		cout << "*";
	cout << endl;
	star(n + 1, absolute);
  
	return;
}
int main(void)
{
	int n;
	cin >> n;
	star(1, n);
  
  return 0;
}
