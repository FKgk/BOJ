#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool function_replace(int &x)
{
	return true;
}

int main(void)
{
	int N, M, b, e, x;
	cin >> N >> M;
	vector<int> v(N + 1, 0);
	for (int i = 0; i < M; i++)
	{
		cin >> b >> e >> x;
		replace_if(v.begin() + b, v.begin() + e + 1, function_replace, x);
	}

	for (vector<int>::iterator iter = v.begin() + 1; iter != v.end(); iter++)
	{
		cout << *iter << " ";
	}

	return 0;
}
