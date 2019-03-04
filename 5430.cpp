#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
	int t, n;
	deque<int> x;
	string orders, numbers, num;
	bool error, rever;
	cin >> t;

	while (t--)
	{
		error = rever = false;

		cin >> orders >> n >> numbers;

		for (int i = 0; i < numbers.size(); i++)
		{
			if ('0' <= numbers[i] && numbers[i] <= '9')
			{
				num += numbers[i];
			}
			else if(num.size() > 0)
			{
				x.push_back(atoi(num.c_str()));
				num.clear();
			}
		}


		for (int i = 0; i < orders.size(); i++)
		{
			if (orders[i] == 'R')
			{
				rever = (rever == false);
			}
			else
			{
				if (x.empty())
				{
					error = true;
					break;
				}
				else
				{
					if (rever)
						x.pop_back();
					else
						x.pop_front();
				}
			}
		}
		
		if (error)
		{
			cout << "error" << endl;
		}
		else if (x.size() == 0)
		{
			cout << "[]" << endl;
		}
		else
		{
			if (rever == true)
			{
				cout << "[" << x.back();
				x.pop_back();

				while (x.empty() == false) {
					cout << "," << x.back();
					x.pop_back();
				}

				cout << "]" << endl;
			}
			else
			{
				cout << "[" << x.front();
				x.pop_front();

				while (x.empty() == false) {
					cout << "," << x.front();
					x.pop_front();
				}

				cout << "]" << endl;
			}
		}
		x.clear();
	}

	return 0;
}
