#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(void)
{
	int A, B;
	string input, temp;
  
	cin >> input;
  
	if (input[1] == '0')
	{
		temp.assign(input.substr(0, 2));
		A = atoi(temp.c_str());
		temp.assign(input.substr(2, 2));
		B = atoi(temp.c_str());
	}
	else
	{
		temp.assign(input.substr(0, 1));
		A = atoi(temp.c_str());
		temp.assign(input.substr(1, 2));
		B = atoi(temp.c_str());
	}
	cout << A + B << endl;

	return 0;
}
