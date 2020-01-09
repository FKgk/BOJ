#include <iostream>
#include <algorithm>
using namespace std;

int n[9], sum;

void func(int i)
{
	for (int j = i + 1; j < 9; j++)
	{
		if (sum - (n[i] + n[j]) == 100)
		{
			for (int k = 0; k < 9; k++)
				if (n[k] != n[i] && n[k] != n[j])
					cout << n[k] << endl;
			return ;
		}
	}
	
    func(i + 1);
}

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		cin >> n[i];
		sum += n[i];
	}
    
    	sort(n, n + 9);
    
	func(0);

	return 0;
}
