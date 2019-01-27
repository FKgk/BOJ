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
	int N, M, num1, num2, mid;
	cin >> N >> M;
	vector<int> v(N + 1);
	generate(v.begin(), v.end(), interger());
	vector<int>::iterator iter = v.begin();
	
	for (int i = 0; i < M; i++)
	{
		cin >> num1 >> num2 >> mid;
		vector<int> temp(iter + mid, iter + num2 + 1);
		v.erase(iter + mid, iter + num2 + 1);
		v.insert(iter + num1, temp.begin(), temp.end());
	}

	for (iter++; iter != v.end(); iter++)
		cout << *iter << " ";

	return 0;
}
