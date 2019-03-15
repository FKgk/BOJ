#include <iostream>
#include <vector>
using namespace std;

int task[17][3];
vector<int> v[17];

int main(void)
{
	int N, ans;
    
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> task[i][0] >> task[i][1];
		if( i + task[i][0] <= N + 1)
			v[i + task[i][0]].push_back(i);
	}

	for (int i = 1; i <= N + 1; i++)
	{
		ans = task[i-1][2];
        
		for (int j = 0; j < v[i].size(); j++)
			if (task[v[i][j]][2] + task[v[i][j]][1] > ans)
				ans = task[v[i][j]][2] + task[v[i][j]][1];

        task[i][2] = ans;
	}

	cout << task[N + 1][2];
  
  return 0;
}
