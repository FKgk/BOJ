#include <iostream>

using namespace std;

void star(int n, int absolute)
{
	for (int i = 0; i < absolute - n; i++)
		cout << " ";
	for (int i = 0; i < n; i++)
		cout << "* ";
	cout << endl;
	if (n < absolute)
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
