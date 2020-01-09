#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	set<int> s;
	int A, B, n;
	cin >> A >> B;

	for (int i = 0; i < A; i++)
	{
		cin >> n;
		s.insert(n);
	}

	
	for (int i = 0; i < B; i++)
	{
		cin >> n;
		s.erase(n);
	}
	
	cout << s.size() << endl;
	for (auto i : s)
		cout << i << " ";

	return 0;
}
