#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct _string{
	char word[51];
	int num;
}string;

int compare1(const void*s1, const void*s2);

int main(void)
{
	int N; // 총 문자열 개수
	int cnt; // 단어 개수 세기

	scanf("%d", &N);
	string *words = (string *)malloc(sizeof(string) * N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s", &words[i].word);
		
		// 단어 개수 세기
		cnt = 0;
		while (words[i].word[cnt] != '\0')
			cnt++;
		words[i].num = cnt;
	}

	qsort(words, N , sizeof(string), compare1);
    printf("%s\n", words[0].word);
	for (int i =1; i < N; i++) // 출력하기
    if(strcmp(words[i-1].word, words[i].word) !=0 )
	    printf("%s\n", words[i].word);

	return 0;
}

int compare1(const void*s1, const void*s2)
{
	if ((*(string *)s1).num > (*(string *)s2).num)
		return 1;
	else if ((*(string *)s1).num < (*(string *)s2).num)
		return -1;
	else
	{
		int i = 0;
		while (i < (*(string *)s1).num)
		{
			if ((*(string *)s1).word[i] < (*(string *)s2).word[i])
				return -1;
			else if ((*(string *)s1).word[i] > (*(string *)s2).word[i])
				return 1;
			else
				i++;
		}
    
		return 0;
	}
}
