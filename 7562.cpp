#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int map[301][301];
int dx[] = { -2,-1,1,2,2,1,-1,-2 };
int dy[] = { 1,2,2,1,-1,-2,-2,-1 };
int l;
pair<int, int> startPoint, endPoint;

void mapClear()
{
	for (int i = 0; i < l; i++)
		for (int j = 0; j < l; j++)
			map[i][j] = 0;
}

int mapSearch(pair<int, int> startPoint,pair<int, int> endPoint)
{
	pair<int, int> t;
	queue< pair<int, int> > que;
	que.push(startPoint);

	while (que.empty() == false && que.front() != endPoint)
	{
		
		for (int i = 0; i < 8; i++)
		{
			t = make_pair(que.front().first + dx[i], que.front().second + dy[i]);
			if (t.first >= 0 && t.first < l &&
				t.second >= 0 && t.second < l &&
				map[t.first][t.second] == 0)
			{
				que.push(t);
				map[t.first][t.second] = map[que.front().first][que.front().second] + 1;
			}
		}
		que.pop();
	}
	return 0;
}

int main(void)
{
	int t, n1, n2;
	cin >> t;

	while (t--)
	{
		cin >> l;
		cin >> n1 >> n2;
		startPoint = make_pair(n1, n2);
		cin >> n1 >> n2;
		endPoint = make_pair(n1, n2);

		mapSearch(startPoint, endPoint);

		cout << map[endPoint.first][endPoint.second] << endl;

		mapClear();
	}
}
