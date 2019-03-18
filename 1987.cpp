#include <iostream>
using namespace std;

bool al[27];
char map[21][21];
int R, C;
pair<int, int> e;
int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int func(pair<int, int> s, int value)
{
	int ans = value;
	al[map[s.first][s.second] - 'A'] = true;

	for (int i = 0; i < 4; i++)
	{
		int x = s.first + dx[i];
		int y = s.second + dy[i];
		if (x >= 0 && x < R && y >= 0 && y < C &&
			al[map[x][y] - 'A'] == false)
		{
			int t = func(make_pair(x, y), value + 1);
			if (t > ans)
				ans = t;
		}
	}
	
	al[map[s.first][s.second] - 'A'] = false;
	
	return ans;
}

int main(void)
{
	cin >> R >> C;
	e = make_pair(R, C);
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			cin >> map[i][j];

	cout << func(make_pair(0, 0), 1) << endl;

	return 0;
}
