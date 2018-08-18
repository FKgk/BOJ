#include <stdio.h>

int main(void)
{
	int num[9];
	int ans[7];
	int length = 9, i, sum;
	for (i = 0; i < 9; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}


	for (ans[0] = 0; ans[0] < 9; ans[0]++)
	{
		for (ans[1] = ans[0] +1; ans[1] < 9; ans[1]++)
		{
			for (ans[2] = ans[1] +1; ans[2] < length; ans[2]++)
			{
				for (ans[3] = ans[2] +1; ans[3] < length; ans[3]++)
				{
					for (ans[4] = ans[3] +1; ans[4] < length; ans[4]++)
					{
						for (ans[5] = ans[4] +1; ans[5] < length; ans[5]++)
						{
							for (ans[6] = ans[5] + 1; ans[6] < length; ans[6]++)
							{
								sum = 0;
								for (i = 0; i < 7; i++)
								{
									sum += num[ans[i]];
								}
								if (sum == 100)
								{
									for (i = 0; i < 7; i++)
									{
										printf("%d\n", num[ans[i]]);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
