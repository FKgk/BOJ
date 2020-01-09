#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a, b, c;
	bool check = false;
	int temp;
	cin >> a >> b;
	while (a.size() > b.size())
		b.insert(b.begin(), '0');
	while (a.size() < b.size())
		a.insert(a.begin(), '0');

	for(reverse_iterator<string::iterator> ai = a.rbegin(), bi = b.rbegin(); !(ai == a.rend() && bi == b.rend()); ai++, bi++)
	{
		if (check)
			temp = *ai - '0' + *bi - '0' + 1;
		else
			temp = *ai - '0' + *bi - '0';
		if (temp > 9)
			check = true;
		else
			check = false;

		c.insert(c.begin(), temp % 10 + '0');
	}

	if (check)
		cout << "1" << c << endl;
	else
		cout << "" << c << endl;
    
    return 0;
}
