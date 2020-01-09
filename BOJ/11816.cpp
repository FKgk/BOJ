#include <iostream>
#include <cstring>

int main(void)
{
	char str[20];
	int ans = 0;
	int num = 1;
	std::cin >> str;
	int len = strlen(str);
  
	if (str[0] == '0')
	{
		if (str[1] == 'x')
		{
			for (int i = len - 1; i >= 2; i--)
			{
				if ('a' <= str[i] && str[i] <= 'z')
					ans += (str[i] - 'a' + 10) * num;
				else
					ans += (str[i] - '0') * num;
				num *= 16;
			}
		}
		else
		{
			for (int i = len - 1; i >= 1; i--)
			{
				ans += (str[i] - '0') * num;
				num *= 8;
			}
		}
	}
	else
	{
		for (int i = len - 1; i >= 0; i--)
		{
			ans += (str[i] - '0') * num;
			num *= 10;
		}
	}
	std::cout << ans;

	return 0;
}
