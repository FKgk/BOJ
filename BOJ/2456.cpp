#include <iostream>
#include <cmath>
using namespace std;

int stu[3][4];
int m[3];
int N, n, maxi, sec = -1;
long long int ns[3];

int main(void)
{
	cin >> N;

	while (N--)
	{
		for (int i = 0; i < 3; i++)
		{
			cin >> n;
			stu[i][n]++;
			stu[i][0] += n;
		}
	}


	for (int i = 0; i < 3; i++)
		ns[i] += stu[i][0] * pow(10, 3 * 3);

	for (int i = 0; i < 3; i++)
		for (int j = 3; j > 1; j--)
			ns[i] += stu[i][j] * pow(10, 3 * (j - 1));
	
	for (int i = 1; i < 3; i++)
		if (ns[i] > ns[maxi])
			maxi = i;
		else if (ns[i] == ns[maxi])
			maxi = sec = i;

	if (sec == maxi)
		cout << "0 " << stu[maxi][0] << endl;
	else
		cout << maxi + 1 << " " << stu[maxi][0] << endl;

}
