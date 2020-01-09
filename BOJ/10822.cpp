#include <iostream>

int atoi(char *S, int s, int e)
{
	int num = 1, ans = 0;
	for (int i = e - 1; i >= s; i--)
	{
		ans += (S[i] - '0') * num;
		num *= 10;
	}
  
	return ans;
}

int main(void)
{
	char S[101];
	int start = 0, ans = 0, i;
	std::cin >> S;
	for (i = 0; S[i] != NULL; i++)
	{
		if (S[i] == ',')
		{
			ans += atoi(S, start, i);
			start = i + 1;
		}
	}
	ans += atoi(S, start, i);

	std::cout << ans << std::endl;

	return 0;
}
