#include <iostream>
using namespace std;

int main(void)
{
	int t, b[] = { 300, 60 ,10 }, a[3];

	cin >> t;

	for (auto i : { 0, 1, 2 })
	{
		a[i] = t / b[i];
		t = t % b[i];
	}
	
	if (t)
		cout << "-1" << endl;
	else
		for(auto k : a)
			cout << k << endl;

	return 0;
}
