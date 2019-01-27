#include <stdio.h>

int main(void)
{
	char n[1000001]; //문자 입력 받을 곳
	int a[26]; // 문자 순서에 따라 문자 개수 입력 받을 곳
	int cnt = 0; //문자 순서 입력 받을 곳
	int p1 = 0; // 1번째 많은 개수를 가진 알파벳 순서 입력받을 곳
	
	for (int i = 0; i < 26; i++) //각 알파벳 순서에 점수 부여
	{
		a[i] = 0;
	}
    
    gets(n);
    int k = strlen(n);
    
	for (int i = 0; i < k; i++)
	{
		
			if (n[i] >= 'a') // 알파벳의 순서 값 구하기
			{
				cnt = n[i] - 'a';
			}
			else if (n[i] >= 'A') // 알파벳의 순서 값 구하기
			{
				cnt = n[i] - 'A';
			}
			a[cnt] = a[cnt] + 1; // 순서에 해당하는 배열에 점수 더하기
		
	}

	int R1 = a[0];
	int R2 = 0;
	for (int i = 1; i < 26; i++) //가장 큰 점수를 가진 알파벳 구하기
	{
		if (a[i] >= R1) // 순서에서 가장 큰 값 찾기
		{
			p1 = i; // 점수가 가장 큰 알파벳 순서 부여
			R2 = R1;
			R1 = a[i]; // 가장 큰 알파벳 점수 부여
			
		}
	}
	if (R1 == R2) // 가장 큰 값과 두번째 값이 같을 경우
	{
		printf("?");
	}
	else // 그렇기 않을 경우
	{
		p1 = p1 + 'A'; // 대문자로 바꾸기
		printf("%c", p1);
	}

  return 0;
}
