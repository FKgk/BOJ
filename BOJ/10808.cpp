#include <iostream>
using namespace std;

int main(void)
{
	int number[26] = { 0, };
	char string[101];
	int i = 0;
	cin >> string;

	while (string[i] != '\0')
	{
		number[string[i] - 'a']++;
		i++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << number[i] << " ";
	}
  
  return 0;
}
