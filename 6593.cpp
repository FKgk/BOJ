#include <cstdio>
#include <tuple>
#include <queue>
using namespace std;

int map[31][31][31];
int dx[] = { 1,-1,0,0,0,0 };
int dy[] = { 0,0,1,-1,0,0 };
int dz[] = { 0,0,0,0,1,-1 };

int main(void)
{
	int L, R, C;
	char ch;
	queue< tuple<int, int, int> > que;
	tuple<int, int, int> endPoint;

	scanf("%d %d %d", &L, &R, &C);

	while ( !(L == 0 && R == 0 && C == 0) )
	{
		for (int i = 0; i < L; i++)
		{
			for (int j = 0; j < R; j++)
			{
				for (int k = 0; k < C; k++)
				{
					scanf(" %c", &ch);

					if (ch == '.')
						map[i][j][k] = 0;
					else if (ch == '#')
						map[i][j][k] = -2;
					else if (ch == 'S')
					{
						map[i][j][k] = 1;
						que.push(make_tuple (i, j, k));
					}
					else if (ch == 'E')
					{
						map[i][j][k] = 0;
						endPoint = make_tuple(i, j, k);
					}
				}
			}
		}

		while (que.empty() == false)
		{
			auto t = que.front();
			que.pop();

			for (int i = 0; i < 6; i++)
			{
				if (get<0>(t) + dx[i] >= 0 && get<0>(t) + dx[i] < L &&
					get<1>(t) + dy[i] >= 0 && get<1>(t) + dy[i] < R &&
					get<2>(t) + dz[i] >= 0 && get<2>(t) + dz[i] < C &&
					map[get<0>(t) + dx[i]][get<1>(t) + dy[i]][get<2>(t) + dz[i]] == 0)
				{
					map[get<0>(t) + dx[i]][get<1>(t) + dy[i]][get<2>(t) + dz[i]] += map[get<0>(t)][get<1>(t)][get<2>(t)] + 1;
					que.push(make_tuple(get<0>(t) + dx[i], get<1>(t) + dy[i], get<2>(t) + dz[i]));
				}
			}
		}
		
		if (map[get<0>(endPoint)][get<1>(endPoint)][get<2>(endPoint)] > 0)
			printf("Escaped in %d minute(s).\n", map[get<0>(endPoint)][get<1>(endPoint)][get<2>(endPoint)] - 1);
		else
			printf("Trapped!\n");

		scanf("%d %d %d", &L, &R, &C);
	}

	return 0;
}
