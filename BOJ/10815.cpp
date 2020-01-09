#pragma warning(disable:4996)
#include <set>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(void)
{
	int N, n, i;
	set<int> s;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &n);
		s.insert(n);
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &n);
		printf("%d ", s.find(n) != s.end() );
	}
  
	return 0;
}
