#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[100001];

int main(void)
{
	int N, n1, n2, i;
	int ans = 0, t = 0;
	
	vector< pair<int, int> > v;
	cin >> N;
	
	for (i  = 0; i < N; i++)
	{
		cin >> n1 >> n2;
		v.push_back(pair<int, int>(n2, n1));
	}

	sort(v.begin(), v.end());

	for (i = 0; i < N; i++)
	{
		if (t > v[i].second) // 현재 시간 전에 시작하는 것은 무시
			continue;

		ans++;

		t = v[i].first; // t에 가장 빨리 끝나는 시간 대입
	}
	cout << ans << endl;
	
	return 0;
}
