#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	getline(cin, s);

	while (s != "END")
	{
		for (string::reverse_iterator iter = s.rbegin(); iter != s.rend(); iter++)
			cout << *iter;

        cout << endl;
		getline(cin, s);
	}

	return 0;
}
