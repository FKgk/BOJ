#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	map<long long int, int> m;
	long long int num;
	int n;

	cin >> n;

	while (n--)
	{
		cin >> num;
		if (m.insert({ num , 1 }).second == false)
			m[num]++;
	}
    
	num = m.begin()->first;
    
	for (map<long long int, int>::iterator iter = ++(m.begin()); iter != m.end(); iter++)
		if (iter->second > m[num])
			num = iter->first;

	cout << num << endl;

	return 0;
}
