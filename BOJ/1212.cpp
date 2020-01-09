#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  string start[8] = { "", "1", "10", "11", "100", "101", "110", "111" };
  string run[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
	string input;
	cin >> input;
	
	if (input.size() == 1 && *input.begin() == '0')
		cout << "0";
	else
	{
		cout << start[*input.begin() - '0'];
		
		for (string::iterator iter = input.begin() + 1; iter != input.end(); iter++)
			cout << run[*iter - '0'];
	}	

	return 0;
}
