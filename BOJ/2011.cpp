#include <iostream>
#include <string>
using namespace std;

int Stoi(string a) { return (a[0] - '0') * 10 + (a[1] - '0'); }

int main(void)
{
	string str;
	int temp, dp[5001] = { 1, 0, };
	
	cin >> str;
	str.insert(str.begin(), '0');

	for (string::size_type i = 1; i < str.length();  i++)
	{
		temp = Stoi(str.substr(i - 1, 2));

		if (temp % 10 == 0 && temp <= 26)
			dp[i] = dp[i - 2];
		else if (10 <= temp && temp <= 26)
			dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000;
		else if(temp >= 1)
			dp[i] = dp[i - 1];
	}

	cout << dp[str.length() - 1] << endl;

	return 0;
}
