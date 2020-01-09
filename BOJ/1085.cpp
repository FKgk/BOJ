#include <iostream>
using namespace std;

int abs(int a) { return a >= 0 ? a : -a; }

int main(void)
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	
	x = abs(w - x) < x ? abs(w - x) : x;
	y = abs(h - y) < y ? abs(h - y) : y;

	if (x < y)
		cout << x << endl;
	else
		cout << y << endl;

	return 0;
}
