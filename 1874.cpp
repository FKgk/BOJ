#pragma warning(disable:4996)
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

int main(void)
{
	int *num1;
	char *ans;
	int *num2;
	int n, num, i, ansCount = 0;
	int num1Count = 0, num2Count = 0;

	scanf("%d", &n);
	num1 = new int[n];
	num2 = new int[n];
	ans = new char[n * 2 + 1];
	for (i = 0; i < n; i++)
	{
		scanf("%d", (num2 + i));
	}

	num = i = 0;
	

	while (!(num2Count == n))
	{
		if (num1Count == 0 || num1[num1Count] != num2[num2Count])
		{
			if (i >= n)
				break;
			i++;
			num1Count++;
			num1[num1Count] = i;
			ans[ansCount] = '+';
		}
		else
		{
			num1Count--;
			num2Count++;
			ans[ansCount] = '-';
		}
		ansCount++;
	}
	if (num1Count == 0)
	{
		for(i = 0; i < ansCount; i++)
		{
			printf("%c \n", ans[i]);
		}
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}
