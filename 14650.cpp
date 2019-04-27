#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	if (n == 1)
		cout << "0"<<endl;
	else
		cout << 2 * pow(3, n -2) <<endl;
}
