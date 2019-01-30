#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string s;
	int n;
	cin >> n;
    
    if( n == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    
	while (n != 0)
	{
		if (n % 2 == 0)
		{
			n = -(n / 2);
			s.insert(s.begin(), '0');
		}
		else
		{
			if (n > 0)
				n = -(n / 2);
			else
				n = (-n + 1) / 2;
			s.insert(s.begin(), '1');
		}
	}

	cout << s << endl;

	return 0;
}
