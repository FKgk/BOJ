#include <iostream>
#include <string>
using namespace std;

int num[2502] = { 0,1 }; // 분할의 개수
int map[2502][2502]; // 팬린드롭인지 여부
string str;


int main(void)
{
	cin >> str;
	str.insert(str.begin(), '0');

	for (int i = 1; i < str.length(); i++)
	{
		for (int j = 0; j < str.length(); j++)
			if (i - j > 0 && i + j < str.length() && str[i - j] == str[i + j])
				map[i - j][i + j] = 1;
			else break;

		for (int j = 0; j < str.length(); j++)
			if (i - j > 0 && i + j < str.length() && str[i - j] == str[i + j + 1])
				map[i - j][i + j + 1] = 1;
			else break;
	}

	for (int i = 2; i < str.length(); i++)
	{
		for (int j = i; j > 0; j--)
			if (map[j][i])
				if (num[i] == 0 || num[j - 1] + 1 < num[i])
					num[i] = num[j - 1] + 1;
	}

	cout << num[str.length() - 1] << endl;

}
