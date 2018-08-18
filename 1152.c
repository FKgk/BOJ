#include <stdio.h>
int main(void)
{
   char n[1000001];
		int cnt = 0;
		int a = 0;
		gets(n);
		int k = strlen(n);

		for (a = 0; a <= k; a++) // 문자가 시작된 지점 찾기
		{
			if (n[a] != ' ')
			{
				break;
			}
		}

		for (int i = a + 1; i <= k; i++)
		{
			if (n[i] == ' ' && n[i - 1] != ' ') //단어가 적히고나서 띄어쓰기된 부분 찾기
			{
				cnt++;
			}
		}
		if (n[k] != ' '&& n[k - 1] != ' ') // 마지막이 공백문자가 아니면 +1
		{
			cnt++;	
		}
		printf("%d", cnt);

  return 0;
}
