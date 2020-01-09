#include <iostream>
#include <vector>
using namespace std;

int N, M;
int map[9][9];
vector< pair<int, int> > v;

int n1x[] = { 1, 0, -1, 0 };
int n1y[] = { 0, 1, 0, -1 };

pair<int, int> checkRange(pair<int, int> p, int i, int &tcount) // 1 2 3 4 -> ^ <- v 
// 반환 : 수정된 좌표  입력 : 기준 좌표 , 방향, 값
{
	p.first += n1x[i];
	p.second += n1y[i];

	while (0 <= p.first && p.first < N &&
		0 <= p.second && p.second < M &&
		map[p.first][p.second] != 6)
	{
		if (map[p.first][p.second] == 0)
		{
			map[p.first][p.second]--;
			tcount++;
		}
		else if (map[p.first][p.second] < 0)
		{
			map[p.first][p.second]--;
		}

		p.first += n1x[i];
		p.second += n1y[i];
	}

	return p;
}

void returnRange(pair<int, int> p, pair<int, int> ap, int i)
{
	ap.first -= n1x[i];
	ap.second -= n1y[i];
	while (p.first != ap.first || p.second != ap.second)
	{
		if (map[ap.first][ap.second] < 0)
			map[ap.first][ap.second]++;

		ap.first -= n1x[i];
		ap.second -= n1y[i];
	}
}

int CCTV(int k, int count) // k v의 인덱스, count cctv 감시 영역 + 벽의 개수
{
	if (k == v.size())
	{
		return count;
	}
	
	int max = 0, tmax = 0, tcount = 0;
	pair<int, int> t[4];
	
	switch (map[v[k].first][v[k].second]) {
	case 1:
		for (int i = 0; i < 4; i++)
		{
			t[i] = checkRange(v[k], i, tcount);

			tmax = CCTV(k + 1, count + tcount);

			if (tmax > max)
				max = tmax;

			tcount = 0;
			returnRange(v[k], t[i], i);
		}

		return max;

	case 2:
		for (int i = 0; i < 2; i++)
		{
			t[i] = checkRange(v[k], i, tcount);
			t[i + 2] = checkRange(v[k], i + 2, tcount);

			tmax = CCTV(k + 1, count + tcount);

			if (tmax > max)
				max = tmax;

			tcount = 0;
			returnRange(v[k], t[i], i);
			returnRange(v[k], t[i + 2], i + 2);
		}

		return max;
	case 3:
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				int temp = (i + j) % 4;
				t[temp] = checkRange(v[k], temp, tcount);
			}

			tmax = CCTV(k + 1, count + tcount);

			if (tmax > max)
				max = tmax;
			
			
			tcount = 0;
			for (int j = 0; j < 2; j++)
			{
				int temp = (i + j) % 4;
				returnRange(v[k], t[temp], temp);
			}
		}

		return max;
	case 4:
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int temp = (i + j) % 4;
				t[temp] = checkRange(v[k], temp, tcount);
			}

			tmax = CCTV(k + 1, count + tcount);

			if (tmax > max)
				max = tmax;

			tcount = 0;
			for (int j = 0; j < 3; j++)
			{
				int temp = (i + j) % 4;
				returnRange(v[k], t[temp], temp);
			}
		}

		return max;
	case 5:
		for (int i = 0; i < 4; i++)
			t[i] = checkRange(v[k], i, tcount);
		
		max = CCTV(k + 1, count + tcount);

		tcount = 0;
		for (int i = 0; i < 4; i++)
			returnRange(v[k], t[i], i);
		
		return max;
	default:
		return -1;
	}
	
}

int main(void)
{
	int count = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 6)
				count++;
			else if (map[i][j] > 0)
			{
				v.push_back(pair<int, int>(i, j));
				count++;
			}
		}
	}

	cout << N * M - CCTV(0, count) << endl;

	return 0;
}
