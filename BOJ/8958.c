#include <stdio.h>

int main(void)
{
        int n; // 테스트 케이스 개수
		int cnt = 0; // 점수
		int c = 1; // 추가할 점수의 값
		char ch; // OX입력받을 문자
		char f = 'O'; // 비교 문자
		int answer[100]; // 테스트 케이스에 해당하는 점수
		scanf("%d", &n); // 테스트 케이스의 개수 입력
		ch = getchar(); // 개행문자 입력 받아서 없애기
		for (int i = 0; i < n; i++) // 테스트 케이스 만큼 반복
		{
			while(1)
            {
				ch = getchar(); // OX문자 입력받기
				if (ch != '\n') // 개행문자가 올때까지
				{
					
						if (ch == f) // O문자가 올 경우
						{
							cnt = cnt + c; // 점수 더하기
							c++; // 추가점수 구하기
						}
						else // X문자가 올 경우
						{
							c = 1; // 추가점수는 1로 초기화
						}
					
				}
				else // 개행문자가 올 경우
				{
					answer[i] = cnt; // 점수 테스트 케이스에 해당하는 곳에 넣기
					cnt = 0; // 점수 초기화
                    c = 1; // 추가점수는 1로 초기화
                    break; // 무한 루프 빠져나오기
				}
			}
		}
		for (int i = 0; i < n; i++) // 테스트 케이스 만큼 반복
		{
            printf("%d\n", answer[i]); // 테스트 케이스에 해당하는 점수 출력
		}
}
