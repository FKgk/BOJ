#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

struct point
{
	char name[101];
	int x;
	int y;
	point(char _name[], int _x, int _y):x(_x), y(_y)
	{
		strcpy(name, _name);
	}
};

bool compare(point &a, point &b)
{
	if (a.x > b.x)
		return false;
	else if (a.x < b.x)
		return true;
	else if (a.y < b.y)
		return true;
	else 
		return false;
}


int main(void)
{
	char name[101];
	int N, num1, num2, num3;
	vector<point> v;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		scanf("%d %s", &num1, name);
		v.push_back(point(name, num1, i));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
		printf("%d %s\n", v[i].x, v[i].name);
    
	return 0;
}
