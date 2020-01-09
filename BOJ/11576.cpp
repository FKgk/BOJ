#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int A, B, n, n1, num = 0;
	vector<int> v;
	cin >> A >> B;
	cin >> n;

	while (n--)
	{
		cin >> n1;
		num = num * A + n1;
	}

	while (num != 0)
	{
		v.insert(v.begin(), num % B);
		num = num / B;
	}
	
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
	{
		cout << *iter << " ";
	}

	return 0;
}
