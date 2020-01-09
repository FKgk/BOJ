#include <cstdio>
#include <stack>
#pragma warning(disable:4996)
using namespace std;

int main(void)
{
	int testcase;
	char cmd, ch;
	stack<char> left, right;
	scanf("%c", &ch);
	while (ch != '\n')
	{
		left.push(ch);
		scanf("%c", &ch);
	}
	scanf("%d", &testcase);
	
	while (testcase--)
	{
		scanf(" %c", &cmd);
		if (cmd == 'L')
		{
			if (left.empty() == false)
			{
				right.push(left.top());
				left.pop();
			}
		}
		else if (cmd == 'D')
		{
			if (right.empty() == false)
			{
				left.push(right.top());
				right.pop();
			}
		}
		else if (cmd == 'B')
		{
			if (left.empty() == false)
			{
				left.pop();
			}
		}
		else
		{
			scanf(" %c", &ch);
			left.push(ch);
		}
	}
	while (left.empty() == false)
	{
		right.push(left.top());
		left.pop();
	}
	while (right.empty() == false)
	{
		printf("%c", right.top());
		right.pop();
	}

	return 0;
}
