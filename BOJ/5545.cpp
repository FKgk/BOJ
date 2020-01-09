#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void)
{
	int N, A, B, n, ans = 0;
	int kcal;
	vector<int> v;
	cin >> N >> A >> B;
	cin >> kcal;

	ans = kcal / A;

	while (N--)
	{
		cin >> n;
		v.push_back(n);
	}

	sort(v.rbegin(), v.rend());

	for (int i = 0; i < v.size(); i++)
	{
		kcal += v[i];
		A += B;
		if (kcal / A > ans)
			ans = kcal / A;
	}

	cout << ans << endl;
}
