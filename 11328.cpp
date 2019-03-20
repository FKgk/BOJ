#include <iostream>
#include <string>
using namespace std;

int n1[30], n2[30];

void clear() {
	for (int i = 0; i < 30; i++)
		n1[i] = n2[i] = 0;
}


int main(void)
{
	string s1, s2;
	int t;
	bool check;
	cin >> t;
	
	while (t--)
	{
		check = true;
		cin >> s1 >> s2;

		if (s1.size() == s2.size())
		{
			for (char i : s1)
				n1[i - 'a']++;

			for (auto i : s2)
				n2[i - 'a']++;

			for (int i = 0; i < 30; i++)
			{
				if (n1[i] != n2[i])
				{
					check = false;
					break;
				}
			}
			clear();
		}
		else
		{
			check = false;
		}

		if (check)
			cout << "Possible" << endl;
		else
			cout << "Impossible" << endl;
	}

	return 0;
}
