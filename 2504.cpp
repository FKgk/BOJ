#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int main(void)
{
	stack<int> num;
	stack<char> string;
	char str[31];
	char temp;
	cin >> str;
	int i = 0, sum = 0, value = 1;
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '(')
		{
			string.push(str[i]);
			value *= 2;
		}
		else if (str[i] == '[')
		{
			string.push(str[i]);
			value *= 3;
		}
		else if (str[i] == ')' && (string.empty() || string.top() != '(') ||
			str[i] == ']' && (string.empty() || string.top() != '['))
		{
			cout << 0 << endl;
			return 0;
		}
		else if (str[i] == ')')
		{
			if (str[i - 1] == '(')
				sum += value;
			value /= 2;
			string.pop();
		}
		else if (str[i] == ']')
		{
			if (str[i - 1] == '[')
				sum += value;
			value /= 3;
			string.pop();
		}
	}
    if(string.empty())
    	cout << sum << endl;
    else
        cout << 0 <<endl;

	return 0;
}
