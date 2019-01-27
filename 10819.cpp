#include <iostream>
#include <string>
using namespace std;

int total = 0;
void swap(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
int sum(int N, int A[])
{
	int total = 0;
	for (int i = 1; i < N; i++)
		total += (A[i] - A[i-1]) < 0 ? A[i-1] - A[i] : A[i] - A[i-1] ;
	return total;
}
void Recursive(int current, int N, int A[])
{
	if (current == N)
	{
		total = sum(N, A) > total ? sum(N, A) : total;
	}
	else
	{
		for (int i = current; i < N; i++)
		{
			swap(A[i], A[current]);
			Recursive(current + 1, N, A);
			swap(A[i], A[current]);
		}
	}
}


int main(void)
{
	int N;
	int A[8];
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	Recursive(0, N, A);
	cout << total << endl;
  
  return 0;
}
