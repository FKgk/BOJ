#include <iostream>
#include <string>
using namespace std;

char transform(string &s, int len)
{
	return '0' + (*(s.end() - len) - '0') * 4 + (*(s.end() - (len - 1)) - '0') * 2 + (*(s.end() - (len - 2)) - '0');
}

int main(void)
{	
	int len;
	string input;
	cin >> input;
	while (input.size() % 3 != 0)
		input.insert(input.begin(), '0');
	len = input.size();

	while (len > 0 )
	{
		cout << transform(input, len);
		len -= 3;
	}
}
