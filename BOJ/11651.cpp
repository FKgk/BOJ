#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point
{
	int x;
	int y;
	point(int _x, int _y):x(_x), y(_y){}
};

bool compare(point &a, point &b)
{
	if (a.y > b.y)
		return false;
	else if (a.y < b.y)
		return true;
	else
		return a.x < b.x;
}


int main(void)
{
	int N, num1, num2;
	vector<point> v;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num1 >> num2;
		v.push_back(point(num1, num2));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
		cout << v[i].x << " " << v[i].y << "\n";
    
	return 0;
}
