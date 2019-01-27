#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int N, M, cnt;
	vector<int> v;
	cin >> N >> M;
	bool check = false;
	cnt = M - 1;
	for (int i = 1; i <= N; i++)
		v.push_back(i);

	cout << "<" << v[cnt];
	v.erase(v.begin() + cnt);
	cnt--;
	N--;
	if(N != 0)
		cnt = (cnt + M) % N;
	while (v.size() !=  1 && N != 0)
	{
		cout << ", " << v[cnt];
		v.erase(v.begin() + cnt);
		cnt--;
		N--;
		cnt = (cnt + M) % N;
		check = true;
	}
	if (v.size() != 0)
		cout << ", " << v[cnt] << ">" << endl;
	else
		cout << ">" << endl;
}
