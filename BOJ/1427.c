#include <stdio.h>
#include <string.h>

char n[1000002] = { 0, };
int ml, mr, p, temp;
void swap(int a, int b);
void sort(char *arr, int lt, int rt);

void sort(char *arr, int lt, int rt) // a는 왼쪽, b는 오른쪽, c는 가운데
{
	ml = lt;
	mr = rt;
	p = (lt + rt) / 2;
	p = arr[p];
	while (ml <= mr)
	{
		while (arr[ml] > p)
		{
			ml++;
		}
		while (arr[mr] < p)
		{
			mr--;
		}
		if (ml <= mr)
		{
			swap(ml, mr);
			ml++;
			mr--;
		}
	}
	if (lt < mr)
	{
		sort(n, lt, mr);
	}
	if (rt > ml)
	{
		sort(n, ml, rt);
	}

}
void swap(int a, int b)
{
	temp = n[a];
	n[a] = n[b];
	n[b] = temp;
}


int main(void)
{
	gets(n);
	
	sort(n, 0, strlen(n) - 1);
	
	printf("%s", n);
  
  return 0;
}
