#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int b, total = 0, mul = 1;
	string str;

	cin >> str >> b;
	
	for (string::reverse_iterator iter = str.rbegin(); iter != str.rend(); iter++)
	{
		if ('0' <= *iter && *iter <= '9')
			total += (*iter - '0') * mul;
		else
			total += (*iter - 'A' + 10) * mul;
		mul *= b;
	}
  
	cout << total << endl;

	return 0;
}
