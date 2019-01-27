#include <stdio.h>

int main(void)
{
	int n,k,cnt;
	int answer = 0;
	int a[26];
	for(int i =0; i<26;i++)
    {
        a[i] = -1;
    }
	char ch[100];
	scanf("%d", &n);
	gets(ch);
	for (int i = 0; i < n; i++)
	{
		gets(ch);
		k = strlen(ch); // 개행문자까지의 개수
        cnt = ch[0] - 'a';
        a[cnt] = i;
		for (int j = 1; j < k; j++)
		{
			cnt = ch[j] - 'a';
			if( ch[j-1] != ch[j]  && a[cnt] == i)
			{
                answer--;
				break;
			}
			else
			{
				a[cnt] = i;
			}
		}
		answer++;
	}
	printf("%d", answer);
  
  return 0;
}
