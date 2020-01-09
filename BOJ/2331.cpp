#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
class solve
{
	int num[300000];
	int numbers[10];
	int count;
	int x;
public:
	solve(int A, int P)
	{
		for (int i = 0; i < 10; i++)
			numbers[i] = (int)pow(i, P);
		for (int i = 0; i < 236200; i++)
			num[i] = 0;
		count = 1;
		x = A;
	}
	void calValue()
	{
		num[x] = count++;
		int ans = 0;
		while (x != 0)
		{
			ans += numbers[x % 10];
			x /= 10;
		}
		x = ans;
		return ;
	}
	bool checkValue()
	{
		return num[x] > 0;
	}
	int getNum()
	{
		return num[x];
	}
};

int main(void)
{
	int A, P;
	cin >> A >> P;
	solve s(A, P);

	while (true)
	{
		if (s.checkValue())
		{
			cout << s.getNum() - 1 << endl;
			break;
		}
		else
		{
			s.calValue();
		}
	}


	return 0;
}
