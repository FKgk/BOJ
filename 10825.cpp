#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

struct point
{
	char name[11];
	int x;
	int y;
	int z;
	point(char _name[], int _x, int _y, int _z):x(_x), y(_y), z(_z)
	{
		strcpy(name, _name);
	}
};

bool compare(point &a, point &b)
{
	if (a.x > b.x)
		return true;
	else if (a.x < b.x)
		return false;
	else if (a.y < b.y)
		return true;
	else if (a.y > b.y)
		return false;
	else if (a.z > b.z)
		return true;
	else if (a.z < b.z)
		return false;
	else if (strcmp(a.name, b.name) < 0)
		return true;
	else
		return false;
}


int main(void)
{
	char name[11];
	int N, num1, num2, num3;
	vector<point> v;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		scanf("%s %d %d %d", name, &num1, &num2, &num3);
		v.push_back(point(name, num1, num2, num3));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
		printf("%s\n", v[i].name);
    
	return 0;
}
