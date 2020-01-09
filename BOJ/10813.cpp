#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class interger
{
	int data;
public:
	explicit interger() :data(0) {}
	int operator()()
	{
		return data++;
	}
};

int main(void)
{
	int N, M, num1, num2;
	cin >> N >> M;
	vector<int> v(N+1);
	generate(v.begin(), v.end(), interger());

	for (int i = 0; i < M; i++)
	{
		cin >> num1 >> num2;
		swap(v[num1], v[num2]);
	}

	for (int i = 1; i <= N; i++)
		cout << v[i] << " ";

    return 0;
}
