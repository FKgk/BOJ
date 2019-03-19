#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int N, ans  = 0;
	int A[51], B[51];
	
  cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];

  sort(A, A + N);
	sort(B, B + N);

	for (int i = 0; i < N; i++)
	{
		ans += A[i] * B[N - 1 - i];
	}
	cout << ans << endl;

	return 0;
}
