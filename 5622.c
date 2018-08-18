#include <stdio.h>

int main(void)
{
	char n[16]; // 문자 입력 받을 곳
	gets(n); // 문자 입력 받기
	int k = strlen(n); // 문자 길이 확인
	int cnt = 0;
	for (int i = 0; i < k; i++)
	{
		int t = n[i] - 'A';
		
		if (t < 3)
		{
			cnt = cnt + 3;
		}
		else if (t < 6)
		{
			cnt = cnt + 4;
		}
		else if (t < 9)
		{
			cnt = cnt + 5;
		}
		else if (t < 12)
		{
			cnt = cnt +6 ;
		}
		else if (t < 15)
		{
			cnt = cnt + 7;
		}
		else if (t < 19)
		{
			cnt = cnt + 8;
		}
		else if (t < 22)
		{
			cnt = cnt + 9;
		}
		else if (t < 26)
		{
			cnt = cnt +10 ;
		}
	}
	printf("%d", cnt);
  
  return 0;
}
