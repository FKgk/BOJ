#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void)
{
	int N[3];
	string s;

	for (int i = 0; i < 3; i++)
		cin >> N[i];

	sort(N, N + 3);

	cin >> s;

	for (auto i : s)
		cout << N[i - 'A'] << ' ';

    return 0;
}
