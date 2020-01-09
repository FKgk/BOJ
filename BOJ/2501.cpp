#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;

int main(void)
{
	int p, q;
	
	cin >> p >> q;

	for (int i = 1; i * i <= p; i++)
	{
		if (p % i == 0)
		{
			v.push_back(i);
			if (i != (int)(p / i))
				v.push_back((int)(p / i));
		}
	}

	sort(v.begin(), v.end());

	cout << v[q - 1] << endl;
    
	return 0;
}
