#include <iostream>
using namespace std;

int main(void)
{
	int N, K, count = 0;
	int A[10];

	cin >> N >> K;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	
	while (N--)
	{
		count += K / A[N];
		K %= A[N];
	}

	cout << count << endl;
    
  return 0;
}
