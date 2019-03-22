#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int gcm(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	return gcm(b, a % b);
}
int main(void)
{
	int N, n;
	vector<int> v;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> n;
		v.push_back(n);
	}

	for (int i = 1; i < v.size(); i++)
	{
		int t = gcm(v[0], v[i]);

		if ((int)(v[0] / t))
			cout << (int)(v[0] / t);
		else
			cout << "1";
		
		cout << "/";

		if ((int)(v[i] / t))
			cout << (int)(v[i] / t);
		else
			cout << "1";
		cout << endl;
	}
    
    return 0;
}
