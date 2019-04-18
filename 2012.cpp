#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N, t;
	long long ans = 0;
	vector<int> v;

	cin >> N;
	while (N--)
	{
		cin >> t;
		v.push_back(t);
	}
	
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		ans += abs(v[i] - (i + 1));

	cout << ans << endl;
}
