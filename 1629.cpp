#include <iostream>
using namespace std;

int func(int A, int B, int C)
{
	if (B == 0)
		return 1;
    long long t = func(A, B / 2, C);
	if (B % 2)
		return ((t * t) % C * A) % C;
	return (t * t) % C;
}

int main(void)
{
	int A, B, C;

	cin >> A >> B >> C;

	cout << func(A, B, C) << endl;
    
  return 0;
}
