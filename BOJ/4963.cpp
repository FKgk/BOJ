#include <iostream>
using namespace std;

int map[52][52];
int dx[8] = { -1,-1,0,1,1, 1, 0,-1 };
int dy[8] = { 0 ,1 ,1,1,0,-1,-1,-1 };

void search(int w, int h)
{
	map[w][h]--;
	for (int i = 0; i < 8; i++)
		if (map[w + dx[i]][h + dy[i]])
			search(w + dx[i], h + dy[i]);
}

int main(void)
{
	int w, h, i, j, ans;
	cin >> w >> h;
	while (w != 0 && h != 0)
	{
		ans = 0;
		for (i = 1; i <= h; i++)
			for (j = 1; j <= w; j++)
				cin >> map[i][j];
		
		for (i = 1; i <= h; i++)
		{
			for (j = 1; j <= w; j++)
			{
				if (map[i][j] == 1)
				{
					search(i, j);
					ans++;
				}
			}
		}

		cout << ans << endl;

		cin >> w >> h;
	}
	return 0;
}
