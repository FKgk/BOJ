#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, pair<int, int> > m;
string s[10] = { "black","brown", "red", "orange", "yellow", 
				"green", "blue", "violet", "grey", "white" };

int main(void)
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	m["black"] = { 0, 1 };
	for (int i = 1; i < 10; i++)
		m[s[i]] = { i , m[s[i - 1]].second * 10 };

	cout << (long long)(m[s1].first * 10 + m[s2].first) * m[s3].second << endl;

	return 0;
}
