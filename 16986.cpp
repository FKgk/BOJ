#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &n1, int &n2)
{
	int t = n1;
	n1 = n2;
	n2 = t;
}

int main(void)
{
	int random[10][10];	// 2 i가 이긴다. 1,0 j가 이긴다  1부터 시작
	int N, K, i, j;
	int p[3][20];

	cin >> N >> K;
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= N; j++)
			cin >> random[i][j];
		p[0][i - 1] = i;
	}
	for (i = 1; i < 3; i++)
		for (j = 0; j < 20; j++)
			cin >> p[i][j];
	
	do {
		int n1 = 0, n2 = 1;
		int score[3] = { 0, 0, 0 };
		int match[3] = { 0, 0, 0 };

		while (true)
		{
			if (score[0] == K)
			{
				cout << 1 << endl;
				return 0;
			}
			if (score[1] == K || score[2] == K || match[0] >= N )
				break;

			if (n1 > n2)	swap(n1, n2);
			
			if (random[p[n1][match[n1]++]][p[n2][match[n2]++]] == 2)
			{
				score[n1]++;
				n2 = 3 - n1 - n2;
			}
			else
			{
				score[n2]++;
				n1 = 3 - n1 - n2;
			}
		}

	} while (next_permutation(&p[0][0], &p[0][N]));

	cout << 0 << endl;
    
	return 0;
}
